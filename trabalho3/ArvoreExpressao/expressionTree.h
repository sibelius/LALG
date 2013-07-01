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

PNode CreateNode(char* x);
bool IsOperator(char* x);
bool IsLeftParenthesis(char* x);
bool IsRightParenthesis(char* x);
bool IsOperand(char* x);
int GetPrecedence(char* x);
PNode CreateInfixTree(char* exp);
void PostOrderPrintTree(PNode node);

