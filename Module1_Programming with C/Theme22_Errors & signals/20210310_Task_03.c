/*Задача 3.
Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINELENGTH 100
#define LINESPERPAGE 10

void printpages(FILE *ifp, FILE *ofp);

int main(int argc,char *argv[]){

    FILE *fp;
    char *prog = argv[0];
    int linecount = 0;

    if (argc == 1){
        fprintf(stderr, "No files given\n");
        printpages(stdin, stdout);
    }
    else
        while(--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL){
                fprintf(stderr, "%s: can't open %s\n",prog, *argv);
                exit(1);
            }
            else{
                fprintf(stdout, "\n\n\t\t\tFile: %s\n\n", *argv);
                printpages(fp, stdout);
                fclose(fp);
            }

        if(ferror(stdout)){
            fprintf(stderr, "%s: error writing stdout\n", prog);
            exit(2);
        }
        exit(0);
    }

void printpages(FILE *ifp, FILE *ofp){

    char c;
    int line=0;
    int pg=1;

    while ((c = getc(ifp)) != EOF){
        putc(c, ofp);
        if (c == '\n') {
            line = line + 1;
            if (line == LINESPERPAGE){
                fprintf(stdout, "\n\t\t\tPage %d End.\n\n", pg);
                pg = pg + 1;
                line = 0;
            }
        }
    }
}