#include "library.h"

void init(){
    start = NULL;
}

int add(int number){

    t_node *p = start;
    start = (t_node*)malloc(sizeof(t_node));
    if(!start){
        return -1;
    }
    start->m_nValue = number;
    start->m_pNext = p;
    return 0;
}

int addAfter(int number,int position){

    t_node* q;
    t_node* p = start;
    while(p->m_nValue != position){
        p = p->m_pNext;
    }
    q = (t_node*)malloc(sizeof(t_node));
    q->m_nValue = number;
    q->m_pNext = p->m_pNext;
    p->m_pNext = q;
    return 0;
}

int addPrevious(int number,int position){

    t_node* q;
    t_node* p = start;
    while(p->m_nValue != position){
        p = p->m_pNext;
    }
    q = (t_node*)malloc(sizeof(t_node));
    q->m_pNext = p->m_pNext;
    q->m_nValue = p->m_nValue;
    p->m_pNext = q;
    p->m_nValue = number;
    return 0;
}

int addEnd(int number){

    t_node* p = start;
    t_node* q = (t_node*)malloc(sizeof(t_node));
    if(!q){
        return -1;
    }
    while(p->m_pNext != NULL){
        p = p->m_pNext;
    }
    p->m_pNext = q;
    q->m_nValue = number;
    q->m_pNext = NULL;

    return 0;
}

int deleteFirst(int *n){

    t_node* p = start;
    if(start){
        *n = start->m_nValue;
        start = start->m_pNext;
        free(p);
        return 0;
    }
    else{
        return -1;
    }
}

t_node* deleteElementReturnAfter(int *n,int k){

    t_node* p = start;
    t_node* q;
    while(p->m_nValue != n){
        if(p->m_pNext == NULL){
            return NULL;
        }
        else{
            q = p;
            p = p->m_pNext;
        }
    }

    *n = p->m_nValue;
    q->m_pNext = p->m_pNext;
    free(p);
    return q->m_pNext;
}

void dellEnd(int *n){
    t_node* q;
    t_node* p = start;
    while(p->m_pNext != NULL){
        q = p;
        p = p->m_pNext;
    }

    *n = p->m_nValue;
    q->m_pNext = NULL;
    free(p);
}

void printAfter(t_node *curr){

    t_node* p = start;
    while(p!=NULL){
        printf("Data: %d\n",p->m_nValue);
        p = p->m_pNext;
    }
}