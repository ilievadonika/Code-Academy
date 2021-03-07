/*Задача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана*/

#include <stdio.h>
#include <stdlib.h>

union variables{
    char c;
    int i;
    float f;
};

void printUnion(union variables var);

int main(void){

    union variables var = {13};
    printf("Accessing all of the union elements at the same time: \n");
    printUnion(var);

    printf("Accessing all of the union elements one by one:\n");
    var.c = 'A';
    printf("Character: %c\n",var.c);
    var.i = 14;
    printf("Integer: %d\n",var.i);
    var.f = 3.4;
    printf("Float: %f\n",var.f);

    return 0;
}

void printUnion(union variables var){

    printf("Char: %c\n",var.c);
    printf("Integer: %d\n",var.i);
    printf("Float: %f\n",var.f);

}