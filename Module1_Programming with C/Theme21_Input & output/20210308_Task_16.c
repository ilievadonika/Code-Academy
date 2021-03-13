/*Задача 16.
Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    FILE *fpNew = NULL;

    char c;
    int lineCount = 0;
    int delLine;

    fp = fopen("zad16.txt", "r");
    fpNew = fopen("zad16_new.txt", "w");

    if(fp == NULL || fpNew == NULL) {
        perror("Error oppening file!");
        exit(1);
    }

    for (c = getc(fp); c != EOF; c = getc(fp)) {
        if (c == '\n') 
            lineCount++; 
    }

    printf("The file has %d lines\n", lineCount);
    printf("Enter the number of the line you want to delete: ");

    scanf("%d", &delLine);
    rewind(fp);
    lineCount = 1;

    c = getc(fp);
    while(c != EOF){
        if(delLine != lineCount)
            putc(c, fpNew);
        c = getc(fp);
        if(c == '\n'){
            lineCount++;
        }
    }

    fclose(fp);
    fp = NULL;
    fclose(fpNew);
    fpNew = NULL;

    return 0;
}