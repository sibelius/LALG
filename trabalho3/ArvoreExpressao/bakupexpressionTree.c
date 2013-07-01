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
	printf("entrou em isoperator\n");
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
	return false;
}

bool IsLeftParenthesis(char* x)
{
   return strcmp(x, "(");
}

bool IsRightParenthesis(char* x)
{
   return strcmp(x,")");
}

bool IsOperand(char* x)
{
	printf("verificando se o operando e um inteiro ou float\n");
	if (x == NULL || *x == '\0' || isspace(*x)){
				
		return false;
	}
    char * p;
    strtod (x, &p);
    return *p == '\0';	
}

int GetPrecedence(char* x)
{
	//assert(IsOperator(x));
	printf("era chamado um assert\n");
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

	char* token = strtok( exp, " " );
	
	while(token)
	{
      if (IsOperand(token))
      {
         preOperand = CreateNode(token);
      }
      else if (IsOperator(token))
      {
	  	printf("entrou em eh operador\n");
         PNode p = CreateNode(token);
         p->precedence = GetPrecedence(token) + correction;
         if (p->precedence > preOperator->precedence)
         {
            p->left = preOperand;
            preOperator->right = p;
            p->parent = preOperator;
         }
         else
         {
            preOperator->right = preOperand;
            PNode q = preOperator->parent;
            while (p->precedence <= q->precedence) q = q->parent;

            p->left = q->right;
            q->right = p;
            p->parent = q;
         }
         preOperand = NULL;
         preOperator = p;

      }//else if (IsOperator(exp[i])
      else if (IsLeftParenthesis(token))
      {
         correction += 2;
      }
      else if (IsRightParenthesis(token))
      {
         correction -= 2;
      }
      else
      {
         printf("illegal token found: %c\n", exp[i]);
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

int main()
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
}
