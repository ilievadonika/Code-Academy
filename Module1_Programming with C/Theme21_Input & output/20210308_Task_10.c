/*Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/

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

    fprintf(fp , "%s And i cant wait to start coding with Python!", str);

    /*long ftell(FILE *pfile)*/
    long postion = ftell(fp);
    printf("Your position in the file is: %li", postion);
    
    fclose(fp);
    fp = NULL;
    return 0;
}