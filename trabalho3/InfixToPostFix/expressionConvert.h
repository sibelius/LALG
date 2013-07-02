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


int isempty(struct stack *s); 
void emptystack(struct stack* s);
void push(struct stack* s,int item);
char pop(struct stack* s);
void display(struct stack s);
int isoperator(char e);
int priority(char e);
void infix2postfix(char* infix, char * postfix, int insertspace);
