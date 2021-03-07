/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/
#include <stdio.h>

typedef struct
{
    int age;
    char name[11];
} person;

int main()
{
    person nikolay = {23, "Nikolay"};

    printf("Name: %s\tAge: %d\n", nikolay.name, nikolay.age);
    return 0;
}