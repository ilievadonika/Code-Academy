/*Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    FILE *fp = NULL;
    FILE *temp = NULL;

    char ch;

    fp = fopen("zad14.txt", "rt");
    temp = fopen("zad14_copy.txt", "w");

    if(fp == NULL || temp == NULL) {
        perror("Error oppening file!");
        exit(1);
    } 

    ch = fgetc(fp);
    while(ch != EOF) {
        if(islower(ch))
            ch = ch - 32;
        putc(ch, temp);
        ch = fgetc(fp);
    }

    fclose(fp);
    fp = NULL;
    fclose(temp);
    temp = NULL;

    remove("zad14.txt");
    if(rename("zad14_copy.txt", "zad14.txt") == 0){
        printf("File successfully renamed!\n");
    } else{
        printf("Failed to rename the file!\n");
    }

    temp = fopen("zad14.txt", "r");
    if (temp == NULL){
        printf("Error oppening file!\n");
        exit(1);
    }

    fclose(fp);
    fp = NULL;
    
    printf("Contents of the file: \n");
    ch = fgetc(temp);
    while ((ch = fgetc(temp)) != EOF){
        printf("%c", ch);
    }

    return 0;
}