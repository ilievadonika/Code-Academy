/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b).*/
#include <stdio.h>

void my_swap(int *a, int *b);

int main(void) {
    int number1;
    int number2;
    printf("Input first number: ");
    scanf(" %d", &number1);
    printf("Input second number: ");
    scanf(" %d", &number2);

    printf("Before swapping a = %d and b = %d\n", number1, number2);
    my_swap(&number1, &number2);
    printf("After swapping a = %d and b = %d", number1, number2);

    return 0;
}
void my_swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    return;
}