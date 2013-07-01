#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define bool int
#define true 1
#define false 0

typedef struct Node{
   // store operator or operand
   char* data;
   // only valid for operator
   int precedence;
   struct Node* parent;
   struct Node* left;
   struct Node* right;
}CNode, *PNode;

PNode CreateNode(char* x)
{
   PNode p = (PNode) malloc (sizeof(CNode));
   p->parent = p->left = p->right = NULL;
   p->data = x;
   return p;
}

bool IsOperator(char* x)
{
	//printf("entrou em isoperator\n");
   // Since the only impact of parentheses () is on precedence, 
   // they are not considered as operators here
	if( strlen(x) == 1 ){        
        return
           (x[0] == '*' ||
            x[0] == '/' ||
            x[0] == '+' ||
            x[0] == '-' ||
			x[0] == '>' ||	
			x[0] == '<' ||
			x[0] == '='
			);
	}else if ( strlen(x) == 2 ){
		return
			(strcmp( x, ">="  ) == 0 || 
			 strcmp( x, "<="  ) == 0 || 
			 strcmp( x, "<>"  ) == 0 || 
			 strcmp( x, ">="  ) == 0 
			);
	}

    printf("nao eh operador\n");
	return false;
}

bool IsLeftParenthesis(char* x)
{
    if(strcmp(x, "(") == 0)
        printf("eh parenthesis left\n");
   return strcmp(x, "(");
}

bool IsRightParenthesis(char* x)
{
    if(strcmp(x, ")")==0)
        printf("eh right parenthesis\n");
   return strcmp(x,")");
}

bool IsOperand(char* x)
{
	//printf("verificando se o operando e um inteiro ou float\n");
	if (x == NULL || *x == '\0' || isspace(*x) || strcmp(x, ")") == 0 || strcmp(x,"(") == 0){
		printf("nao eh operando\n");		
		return false;
	}
    //char * p;
    //strtod (x, &p);
    
    //printf("retornara o valor %d\n", *p == '\0');
    //return *p == '\0';	
    printf("eh um operando\n");
    return true;
}

int GetPrecedence(char* x)
{
	//assert(IsOperator(x));
	//printf("era chamado um assert\n");
	if(!IsOperator(x)){
		printf("deu erro\n");
		exit(1);
	}
   
   if (x[0] == '*' || x[0] == '/') return 2;
   else return 1;
}

PNode CreateInfixTree(char* exp)
{
   // create a dummy root with minimal precedence
   // its content is trivial
   PNode root = CreateNode("0");
   root->precedence = 0;

   // the previous operand of current operator
   PNode preOperand = NULL;
   // the previous operator of current operator
   PNode preOperator = root;
   // the impact of preceding parenthesis, if any
   int correction = 0;
	int i = 0;

    char exp2[40];

    strcpy(exp2, "- ( -2 + 5 ) * 4 + -3 / 4 * 3.1" );
    printf("o valor de exp2 e %s\n", exp2);

	char* token = strtok( exp2, " " );
	
	while(token)
	{
        printf("o token e %s\n", token);

     
      if (IsOperator(token))
      {
	  	printf("eh operador\n");
         PNode p = CreateNode(token);
         p->precedence = GetPrecedence(token) + correction;
         printf("chegou aqui 1\n");
         if (p->precedence > preOperator->precedence)
         {
             printf("chegou aqui 2\n");
            p->left = preOperand;
            preOperator->right = p;
            p->parent = preOperator;
         }
         else
         {
             printf("chegou aqui 3\n");
            preOperator->right = preOperand;
            PNode q = preOperator->parent;
            while (p->precedence <= q->precedence){ 
                printf("chegou aqui 4\n");
                q = q->parent;
                printf("chegou aqui 5\n");
                printf("imprimindo o valor de p->precedente %d\n", p->precedence);
            }
            
            printf("chegou aqui 6\n");

            p->left = q->right;
            q->right = p;
            p->parent = q;
         }
         preOperand = NULL;
         preOperator = p;
        printf("terminou o if do eh operador\n");
      }else if (IsOperand(token)){
         //printf("entrou em eh operando\n"); 
         preOperand = CreateNode(token);
      }//else if (IsOperator(exp[i])
      else if (IsLeftParenthesis(token))
      {
          //printf("entrou em eh leftParenthesis\n");
         correction += 2;
      }
      else if (IsRightParenthesis(token))
      {
          //printf("entrou em eh rightparenthesis\n");
         correction -= 2;
      }
      else
      {
         printf("illegal token found: %s\n", token);
         break;
      }

	  token = strtok(NULL, " ");
   }//while

   if (preOperand == NULL)
       printf("illegal expression: cannot end with operator: %s\n", preOperator->data);
   else preOperator->right = preOperand;

   // delete dummy root
   PNode realRoot = root->right;
   //delete root;
   free(root);
   if (realRoot) realRoot->parent = NULL;
   return realRoot;
}

void PostOrderPrintTree(PNode node)
{
   if (node)
   {
      PostOrderPrintTree(node->left);
      PostOrderPrintTree(node->right);
      printf("%s ", node->data);
   }
}

/*int main()
{
   // valid operators: + - * / ( )
   // valid operands: integers
   // whitespace separated as: ( 1 + 2 ) * 3
   char exp[20];
   scanf("%[^\n]", exp);

   PNode root = CreateInfixTree(exp);
   PostOrderPrintTree(root);
   printf("\n");

   return 0;
}*/
