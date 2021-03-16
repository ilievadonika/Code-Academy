#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node{
    int m_nValue;
    t_node *m_pNext;
}t_node;

extern t_node* start;

void init();
int add(int number);
int addAfter(int number,int position);
int addPrevious(int number,int position);
int addEnd(int number);
int deleteFirst(int *n);
t_node* deleteElementReturnAfter(int *n,int k);
void dellEnd(int *n);
void printAfter(t_node *curr);
void printList();