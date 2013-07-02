#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 10
#define EMPTY -1

struct stack
{
    char data[MAX];
    int top;
};

int isempty(struct stack *s)
{
    printf("isempty\n");
    return (s->top == EMPTY) ? 1 : 0;
}

void emptystack(struct stack* s)
{
    printf("emptystack\n");
    s->top=EMPTY;
}

void push(struct stack* s,int item)
{
    printf("push\n");
    if(s->top == (MAX-1))
    {
        printf("\nSTACK FULL");
    }
    else
    {
        printf("add to stack\n");
        ++s->top;
        s->data[s->top]=item;
    }
}

char pop(struct stack* s)
{
    printf("pop\n");
    char ret=(char)EMPTY;
    if(!isempty(s))
    {
        ret= s->data[s->top];
        --s->top;
    }
    return ret;
}

void display(struct stack s)
{
    printf("display\n");
    while(s.top != EMPTY)
    {
        printf("not empty\n");
        printf("\n%d",s.data[s.top]);
        s.top--;
    }
}

int isoperator(char e)
{
    getchar();
    printf("isoperator\n");
    if(e == '+' || e == '-' || e == '*' || e == '/' || e == '%')
        return 1;
    else
        return 0;
}


int priority(char e)
{
    printf("priority\n");
    int pri = 0;

    if(e == '*' || e == '/' || e =='%')
        pri = 2;
    else
    {
        if(e == '+' || e == '-')
            pri = 1;
    }
    return pri;
}

void infix2postfix(char* infix, char * postfix, int insertspace)
{
    printf("in infix2postfix\n");
    char *i,*p;
    struct stack X;
    char n1;
    emptystack(&X);
    i = &infix[0];
    p = &postfix[0];

    while(*i && *i != '\n')
    {
        while(*i == ' ' || *i == '\t')
        {
            i++;
        }

        if( isdigit(*i) || isalpha(*i) )
        {
            printf("is digit.\n");
            while( isdigit(*i) || isalpha(*i))
            {
                *p = *i;
                p++;
                i++;
            }
            /*SPACE CODE*/
            if(insertspace)
            {
                *p = ' ';
                p++;
            }
            /*END SPACE CODE*/
        }

        if( *i == '(' )
        {
            push(&X,*i);
            i++;
        }

        if( *i == ')')
        {
            n1 = pop(&X);
            while( n1 != '(' )
            {
                *p = n1;
                p++;
                /*SPACE CODE*/
                if(insertspace)
                {
                    *p = ' ';
                    p++;
                }
                /*END SPACE CODE*/
                n1 = pop(&X);
            }
            i++;
        }

        if( isoperator(*i) )
        {
            if(isempty(&X))
                push(&X,*i);
            else
            {
                n1 = pop(&X);
                while(priority(n1) >= priority(*i))
                {
                    *p = n1;
                    p++;
                    /*SPACE CODE*/
                    if(insertspace)
                    {
                        *p = ' ';
                        p++;
                    }
                    /*END SPACE CODE*/
                    n1 = pop(&X);
                }
                push(&X,n1);
                push(&X,*i);
            }
            i++;
        }
    }
    while(!isempty(&X))
    {
        n1 = pop(&X);
        *p = n1;
        p++;
        /*SPACE CODE*/
        if(insertspace)
        {
            *p = ' ';
            p++;
        }
        /*END SPACE CODE*/
    }
    *p = '\0';
}

/*
int main()
{
    char in[50],post[50],temp[50];

    strcpy(&post[0],"");
    printf("Enter Infix Expression : ");
    fflush(stdin);
    fgets(in,50,stdin);
    printf("%s",in);
    infix2postfix(&in[0],&post[0],1);
    printf("Postfix Expression is : %s\n",&post[0]);

    return 0;
}
*/
