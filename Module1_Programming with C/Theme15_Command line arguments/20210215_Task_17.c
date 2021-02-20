/*Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_functi
on_memset.htm*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char firstString[] = "A string to be copied";
    char secondString[] = "I am very good in string coping";

    int sizeFirst = sizeof(firstString)/ sizeof(firstString[0]);
    int sizeSecond = sizeof(secondString)/ sizeof(secondString[0]);

    char cpyFirst[sizeFirst];
    char cpySecond[sizeSecond];

    memset(cpyFirst, 0, sizeFirst); 
    memset(cpySecond, 0, sizeSecond); 

    printf("\nThe first string is: %s\n", firstString);
    strcpy(cpyFirst, firstString);
    printf("The copy of the first string is: %s\n\n", cpyFirst);
    printf("The second string is: %s\n", secondString);
    strcpy(cpySecond, secondString);
    printf("The copy of the secondstring is: %s\n", cpySecond);

    return 0;
}