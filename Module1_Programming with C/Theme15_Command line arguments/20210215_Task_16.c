/*Задача 16.
Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
tm
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char firstString[] = "A string to be copied";
    char secondString[] = "I am very good in string coping";

    int sizeFirst = sizeof(firstString)/ sizeof(firstString[0]);
    int sizeSecond = sizeof(secondString)/ sizeof(secondString[0]);

    char cpyFirst[sizeFirst];
    char cpySecond[sizeSecond];
    
    printf("\nThe first string is: %s\n", firstString);
    strcpy(cpyFirst, firstString);
    printf("The copy of the first string is: %s\n\n", cpyFirst);
    printf("The second string is: %s\n", secondString);
    strcpy(cpySecond, secondString);
    printf("The copy of the secondstring is: %s\n", cpySecond);


    return 0;
}