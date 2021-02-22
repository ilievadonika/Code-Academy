/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
#include <stdio.h>

int fibonachiNums(int *p, int size);
void printArr(int *arr, int size);

int main(int argc, char **argv){
    int arr[20] = {0};
    int *p = &arr;
    int size = sizeof(arr)/sizeof(arr[0]);

    int (*new)(int *, int) = fibonachiNums;
    new(p, size);

    printArr(arr, size);

    return 0;
}

int fibonachiNums(int *p, int size) {
    int firstNum = 0;
    int secondNum = 1;
    p[0] = firstNum;
    p[1] = secondNum;

    for(int i = 2; i < size; i++) {
        p[i] = p[i-1] + p[i-2];
    }

    return *p;
}

void printArr(int *arr, int size) {
    printf("\nThese are 20 fibonachi numbers:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}