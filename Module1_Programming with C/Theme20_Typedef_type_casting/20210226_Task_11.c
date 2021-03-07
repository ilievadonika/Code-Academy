/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int integer;
    struct node *next;
}Node;

int main(void){

    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->integer = 4;
    new_node->next = NULL;

    printf("Integer: %d\n",new_node->integer);
    printf("Pointer: %p\n",new_node->next);

    free(new_node);
    return 0;
}