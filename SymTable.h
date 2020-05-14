/*********************************************
*
*           Andre Leite - 2015250489
*           Lucas Ferreira - 2016243439
*
**********************************************/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct tabnode* t_pointer; 

typedef struct tabnode{
  pointer node;
  char *id_type;
  char *id;
  int cardptypes;
  char paramtypes[32][32];
  char *type;
  char *param;
  t_pointer lower;
  t_pointer next;
}Tabnode;

void printThemTables(Node *node);
void printFinal(t_pointer table);
void makeTableModel(t_pointer table, Node *node);
void getCallType(Node *node);
char *childType(Node *n);
void statementA(t_pointer top, t_pointer table_root, Node *t);
char *navigate(t_pointer top, t_pointer table_root,Node *aux);
char *correctType(char *node, Node *n);
void repeated(t_pointer top);
void repeatedin(t_pointer mdecl);
char *getType(Node *node, t_pointer tabela);
void specificTable(stack_p stack,Node *node,t_pointer table_root);
void method(Node *root,Node *method, t_pointer table_root);
void controlPrint(char *token);