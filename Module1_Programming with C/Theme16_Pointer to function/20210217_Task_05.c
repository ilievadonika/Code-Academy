/*Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pushRand(int *arr, int size);
void findNums(int *arr, int size);
void func(int *arr, int size);

int main(int argc, char **argv) {
    int arr[5][5];
    int *p = *arr;
    int row = sizeof(arr) / sizeof(arr[0]);
    int column = sizeof(arr[0]) / sizeof(arr[0][0]);

    int size = row * column;

    srand(time(0));

    pushRand(p, size);
    findNums(p, size);
    func(p, size);
    
    return 0;
}

void pushRand(int *arr, int size){
    int i = 0;

    while (i < size){
        *arr = rand() % 11;
        arr++;
        i++;
    }

    return;
}

void findNums(int *arr, int size) {
    int i = 0;
    printf("\nThe elements from the original array are: ");
    while(i < size - 1) {
        printf("%d,", *arr);
        arr++;
        i++;
    }
    printf("%d\n", *arr);

    return;
}

void func(int *arr, int size){
    int i = 0;
    printf("\nThe elements that are between 1 and 5 are: ");
    
    while(i < size) {
        if(*arr >= 1 && *arr <= 5)
            printf("%d, ", *arr);
        arr++;
        i++;
    }
    return;
}
