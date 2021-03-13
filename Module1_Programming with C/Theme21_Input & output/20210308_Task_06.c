/*Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметри спейс, неспейс, спецификатори;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[10];
    char greeting[10];
    int age;

    FILE *fp = NULL;
    fp = fopen("test1.txt", "r");

    if(fp == NULL){
        perror ("Error opening file");
        exit(1);
    }
    /*int fscanf(FILE *stream, const char *format,....)*/
    fscanf(fp, "%s %s %d", name, greeting, &age);

    printf("%s %s %d", name, greeting, age);

    fclose(fp);
    fp = NULL;

    return 0;
}