/*Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

node* start;

void init(void);
int add(int data);
int printNthElem(int n);
void printlist(void);

int main(void) {
    init();

    for(int i = 1; i <= 14; i++) {
        add(i);
    }

    printf("Linked list: \n");
    printlist();

    int x = 5;
    printf("The %d element is: %d", x, printNthElem(x));

    return 0;
}

void init(void) {
    start = NULL;
}

int add(int data) {
    node* p = start;
    start = (node*)malloc(sizeof(node));

    if(!start)
        return -1;

    start->data = data;
    start->next = p;

    return 0;
}

int printNthElem(int n) {
    node* p = start;
    while(p != NULL && n > 1) {
        p = p->next;
        n--;
    }

    if(n > 1)
        return -1;
    else
        return p->data;
}

void printlist(void) {
    node *p = start;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}