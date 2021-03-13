/*Задача 9.
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    char str[] = "I love C programming!";

    fp = fopen("zad9.txt", "wt+");
    if(fp == NULL){
        perror ("Error opening file");
        exit(1);
    }

    /*int fprint(FILE* stream, const char *forma…);*/
    fprintf(fp , "%s And i cant wait to start coding with Python!", str);

    fclose(fp);
    fp = NULL;

    return 0;
}