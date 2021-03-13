/*Задача 7.
Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int ch;
    FILE *fp = NULL;

    fp = fopen("char.txt", "wt+");

    if(fp == NULL){
        perror ("Error opening file");
        exit(1);
    }
    /*Int fputc(int ch, FILE *pfile*/
    for(ch = 45; ch < 100; ch++) {
        fputc(ch, fp);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}