/*Задача 11.
Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    char str[] = "I love C programming!";
    fpos_t pos;

    fp = fopen("zad9.txt", "wt+");
    if(fp == NULL){
        perror ("Error opening file");
        exit(1);
    }

    fprintf(fp , "%s And i cant wait to start coding with Python!", str);

    /*long ftell(FILE *pfile)*/
    long position = ftell(fp);
    printf("Your position in the file with ftell(): %li\n", position);

    /*int fgetpos(FILE *pfile, fpos_t *position);*/
    int fpos = fgetpos(fp, &pos);
    printf("Your position in the file with fgetpos(): %i", fpos);
    
    fclose(fp);
    fp = NULL;
    return 0;
}