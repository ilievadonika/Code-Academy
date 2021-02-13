/*Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* piValue = NULL;
    unsigned uSize = 0;
    printf("\nEnter size: ");
    scanf("%u", &uSize);
    piValue = (int*) malloc(uSize * sizeof(int));

    if(NULL == piValue) {
        printf("Allocation memory error!\n");
        exit(1);
    }

    for(int i = 0; i < uSize; i++) {
        printf("Enter element %u: ", i + 1);
        scanf(" %d", (piValue + i));
    }

    printf("Your array is:");

    for(int i = 0; i < uSize; i++) {
        printf(" %d", *(piValue + i));
    }

    free(piValue);

    return 0;
}