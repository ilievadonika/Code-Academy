/*Задача 5.
Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.*/

#include <stdio.h>
#include <stdlib.h>

struct date{
    int day;
    int month;
    int year;
};

void printDate(struct date array[]);

int main(void){

    struct date array[10] = {[0] = {3,4,1998}, [1] = {5,8,2000}, [2] = {9,8,2002}, [3] = {8,7,1991}
    ,[4] = {6,3,1998}, [5] = {8,5,2001}, [6] = {3,4,2998}, [7] = {13,5,1951}, [8] = {13,7,1911}, [9] = {1,2,2021}};

    printDate(array);

    return 0;
}

void printDate(struct date array[]){
    for(int i = 0; i < 10; i++){
        printf("Day: %d\n",(array + i)->day);
        printf("Month: %d\n",(array + i)->month);
        printf("Year: %d\n",(array + i)->year);
        printf("\n");
    }
}