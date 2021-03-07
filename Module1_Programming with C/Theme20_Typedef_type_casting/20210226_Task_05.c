/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/

#include <stdio.h>
#include <stdlib.h>
#define size 5

typedef int array[size];
void printArray(array arr);

int main(void){
    array a;

    for(int i = 0; i < size; i++){
        printf("Enter value for index %d: \n", i);
        scanf("%d", &a[i]);
    }
    printArray(a);

    return 0;
}

void printArray(array arr){
    for(int i = 0; i < size; i++){
        printf("Array[%d] = %d\n", i, arr[i]);
    }
}
