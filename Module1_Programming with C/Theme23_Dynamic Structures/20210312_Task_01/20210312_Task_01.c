#include "library.h"
/*Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък:
typedef struct t_node {
int m_nValue;
t_node* m_pNext;
} t_node; */

t_node *start;

int main(void){

    int i;
    init();
    add(1);
    add(2);
    for(i=3;i<15;i++){
        add(i);
    }
    printAfter(start);
    addAfter(15,12);
    printf("List after adding 15 after 13\n");
    printAfter(start);

    int x = 5;
    dellEnd(&x);
    printf("List after deleting last element\n");
    printAfter(start);

    deleteFirst(&x);
    printf("List after deleting first element\n");
    printAfter(start);

    return 0;
}