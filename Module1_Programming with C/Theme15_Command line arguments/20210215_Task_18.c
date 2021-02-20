/*Задача 18. Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.
*/
#include <stdio.h>
#include <string.h>

void stringCopy(char *str1, int size, char *str2);

int main(int argc, char **argv) {
    char firstString[] = "A string to be copied";
    char secondString[] = "I am very good in string coping";
    int sizeFirst = strlen(firstString);
    int sizeSecond = strlen(secondString);

    char cpyFirst[sizeFirst];
    char cpySecond[sizeSecond];

    printf("\nThe first string is: %s\n", firstString);
    stringCopy(firstString, sizeFirst, cpyFirst);
    printf("The copy of the first string is: %s\n\n", cpyFirst);
    printf("The second string is: %s\n", secondString);
    stringCopy(secondString, sizeSecond, cpySecond);
    printf("The copy of the secondstring is: %s\n", cpySecond);

    return 0;
}

void stringCopy(char *str1, int size, char *str2) {
    str1 += size;
    str2 += size;
    while(size >= 0) {
        *str2-- = *str1--;
        size--;
    }

    return;
}