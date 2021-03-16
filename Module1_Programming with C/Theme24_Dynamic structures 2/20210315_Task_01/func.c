#include "stack.h"

void init(){
    start = NULL;
}

int push(unsigned int n){

    t_node *p = start;
    start = (t_node*)malloc(sizeof(t_node));

    if(!start){
        return 1;
    }

    start->data = n;
    start->next = p;

    return 0;
}

int pop(unsigned int *n){

    if(start){
        *n = start->data;
        t_node *p = start;
        start = start->next;
        free(p);
        return 1;
    }else{
        return 0;
    }

}