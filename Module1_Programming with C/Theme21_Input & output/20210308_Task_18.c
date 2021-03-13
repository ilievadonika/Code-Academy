/*Задача 18:
Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
XML формат по показания в лекцията начин.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
    char name[20];
    int age;
    char gender;
} t_person;

static const char *FORMAT_PERSON_IN = "(%[^,], %d, %c)\n";
static const char *FORMAT_PERSON_OUT = "(%s, %d, %c)\n";

int main(void) {
    t_person doni = {
        .name = "Donika",
        .age = 25,
        .gender = 'F'};
    t_person ddoni;

    FILE *fp;
    fp = fopen("xml_test.xml", "w+");
    if (fp == NULL){
        printf("Error oppening file!\n");
        exit(1);
    }

    fprintf(fp, FORMAT_PERSON_OUT, doni.name, doni.age, doni.gender);
    fseek(fp, 0, SEEK_SET);
    fscanf(fp, FORMAT_PERSON_IN, ddoni.name, &ddoni.age, &ddoni.gender);
    printf(FORMAT_PERSON_OUT, ddoni.name, ddoni.age, ddoni.gender);

    fclose(fp);
    fp = NULL;
    return 0;
}