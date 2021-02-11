/*Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането*/
#include <stdio.h>

int sumEvens(int *firstElement, int arrElements);

int main(void){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *ip = &arr[1];

    printf("Sum of even elements: %d", sumEvens(ip, 10));
    
    return 0;
}

int sumEvens(int *firstElement, int arrElements) {
    int sum = 0;
    int i = 0;

    while(i < arrElements) {
        sum += *(firstElement + i);
        i += 2;
    }

    return sum;
}