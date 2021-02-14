/*Задача 5 Разширяване на заделена памет с realloc*/
#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, unsigned size);

int main(void) {
    int* piValue = NULL;
    unsigned uSize = 0;
    unsigned newSize = 0;
    int userAnswer = 0;

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

    printArray(piValue, uSize);

    printf("\nIf you want to extend your array, press 1, to exit press 0.\n");
    scanf(" %d", &userAnswer);

    while (userAnswer != 0) {
        newSize = uSize * 2;
        realloc(piValue, newSize);

        for(int i = uSize; i < newSize; i++) {
            printf("Enter element %u: ", i + 1);
            scanf(" %d", (piValue + i));
        }
        printf("Press 1 to continue or 0 to exit.");
        uSize = newSize;
        scanf(" %d", &userAnswer);
    } 

    printArray(piValue, uSize);

    free(piValue);
    return 0;
}

void printArray(int* arr, unsigned size){
    printf("Your array is:");

    for(int i = 0; i < size; i++) {
        printf(" %d", *(arr + i));
    }
    return;
}