/*Задача 1 Напишете програма, която чете стринг от стандартния вход и
го извежда на стандартния изход с функцията gets(szBuf);*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char szBuf[BUFSIZ] = {0};
    do {
        printf("\nEnter a value: ");
        gets(szBuf);
        printf("\nYou entered: ");
        puts(szBuf);
    } while (strlen(szBuf) > 0);
    
    return 0;
}