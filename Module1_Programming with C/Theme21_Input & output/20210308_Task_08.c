/*Задача 8.
Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    char str[60] = {"\nI love C programming!"};

    fp = fopen("zad8.txt", "wt+");
    if(fp == NULL){
        perror ("Error opening file");
        exit(1);
    }

    fputs("This is C programming. ", fp);
    fputs("This is a system programming language.", fp);
    fputs(str, fp);

    fclose(fp);
    fp = NULL;

    return 0;
}