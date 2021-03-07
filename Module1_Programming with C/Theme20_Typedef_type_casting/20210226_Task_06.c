/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число*/

#include <stdio.h>
#include <stdlib.h>
#define size 100

typedef struct key{
    char s[100];
    int i;
}key_t;

void printStruct(key_t key);

int main(void){

    key_t key1 = {"Hello", 5};
    printStruct(key1);

    return 0;
}

void printStruct(key_t key){
    printf("String: %s\n", key.s);
    printf("Integer: %d\n", key.i);
}