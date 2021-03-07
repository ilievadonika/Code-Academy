/*Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/

#include <stdio.h>
#include <stdlib.h>

union variables{
    int i;
    int integer;
    char c;
};

void printUnion(union variables var);

int main(void){

    union variables var;
    printf("Accessing one by one: \n");
    var.i = -7;
    printf("Integer 1: %d\n",var.i);
    var.integer = 10;
    printf("Integer 2: %d\n",var.integer);
    var.c = 'c';
    printf("Char: %c\n",var.c);

    union variables initUnity;
    printf("Accessing all of them at the same time: \n");
    initUnity.i = -7;
    initUnity.integer = 10;
    initUnity.c = 'c';
    printUnion(initUnity);
    

    return 0;
}

void printUnion(union variables var){

    printf("Char: %c\n",var.c);
    printf("Integer 1: %d\n",var.i);
    printf("Integer 2: %d\n",var.integer);

}