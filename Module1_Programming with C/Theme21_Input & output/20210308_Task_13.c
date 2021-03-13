/*Задача 13.
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете..*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    int count = 0;
    char c;

    fp = fopen("zad13.txt", "r");

    if(fp == NULL){
        perror ("Error opening file");
        exit(1);
    }

    for (c = getc(fp); c != EOF; c = getc(fp)) {
        if (c == '\n') /* Increment count if this character is newline */
            count++; 
    }
  
    fclose(fp);
    fp = NULL;

    printf("The file has %d lines\n ", count); 

    return 0;
}