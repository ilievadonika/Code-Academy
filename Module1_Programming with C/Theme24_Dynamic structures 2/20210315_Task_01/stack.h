#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node{
    int data;
    t_node *next;
}t_node;

t_node *start;

void init();
int push(unsigned int n);
int pop(unsigned int *n);