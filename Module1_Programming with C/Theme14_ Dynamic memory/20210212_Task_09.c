/*Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* piValue = NULL;
    unsigned uSize = 0;

    printf("\nEnter size: ");
    scanf("%u", &uSize);
    piValue = (int*)calloc(uSize, sizeof(int));

    if(NULL == piValue) {
        printf("Allocation memory error!\n");
        exit(1);
    }

    printf("The adress of the array start at %p up to %p\n", piValue, (piValue + uSize));

    printf("\nEnter the new size: ");
    scanf("%u", &uSize);
    piValue = realloc(piValue, uSize * sizeof(int));

    if(NULL == piValue) {
        printf("Reallocation memory error!\n");
        exit(2);
    }

    printf("Array is reallocated up to %p\n", (piValue + uSize));

    free(piValue);
    
    return 0;
}