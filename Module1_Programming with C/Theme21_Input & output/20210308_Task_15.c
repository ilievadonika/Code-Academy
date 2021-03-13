/*Задача 15.
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    int i = 0;

    fp = fopen("zad15.txt", "r");
    if(fp == NULL) {
        perror("Error oppening file!");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    long position = ftell(fp);

    printf("Contents of the file in reverse order: \n");

    while (i < position){
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
