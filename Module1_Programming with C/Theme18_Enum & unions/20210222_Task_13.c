/*Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};*/

#include <stdio.h>
#include <stdlib.h>

union tagUnion{
    unsigned short us:6;
    char c: 6;
};

int main(void){

    union tagUnion test;
    printf("Accessing the union elements one by one: \n");
    test.us = 4;
    printf("Unsigned short: %hu\n",test.us);
    test.c = 25;
    printf("Char: %c\n",test.c);

    return 0;
}