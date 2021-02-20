/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.
*/
#include <stdio.h>

void stringCopy(char *str1, char *str2);

int main(int argc, char **argv) {
    char firstString[] = "A string to be copied";
    char secondString[] = "I am very good in string coping";
    int sizeFirst = sizeof(firstString)/ sizeof(firstString[0]);
    int sizeSecond = sizeof(secondString)/ sizeof(secondString[0]);

    char cpyFirst[sizeFirst];
    char cpySecond[sizeSecond];

    printf("\nThe first string is: %s\n", firstString);
    stringCopy(firstString, cpyFirst);
    printf("The copy of the first string is: %s\n\n", cpyFirst);
    printf("The second string is: %s\n", secondString);
    stringCopy(secondString, cpySecond);
    printf("The copy of the secondstring is: %s\n", cpySecond);

    return 0;
}

void stringCopy(char *str1, char *str2) {
    int i = 0;
    while(*str1 != '\0') {
        str2[i++] = *str1++;
    }
    str2[i] = '\0';
    return;
}