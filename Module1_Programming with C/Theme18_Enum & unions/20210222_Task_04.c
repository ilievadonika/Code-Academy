/*Задача 4.
Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/

#include <stdio.h>
#include <stdlib.h>

struct date{
    int day;
    int month;
    int year;
};

void printDate(struct date date);

int main(void){

    struct date contractdate = {06,1,2021};
    struct date contractdate1 = {.day = 06,.month = 1,.year = 2021};
    struct date contractdate2;
    contractdate2.day = 06;
    contractdate2.month = 1;
    contractdate2.year = 2021;
    printf("\nFirst way:\n");
    printDate(contractdate);
    printf("\nSecond way:\n");
    printDate(contractdate1);
    printf("\nThird way:\n");
    printDate(contractdate2);

    return 0;
}

void printDate(struct date date){
    printf("Day: %d\n",date.day);
    printf("Month: %d\n",date.month);
    printf("Year: %d\n",date.year);
}