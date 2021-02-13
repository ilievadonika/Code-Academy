/*Задача 2 Разширяване на заделена памет с realloc*/
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

    printf("Addresses of allocated memory: %p\n", piValue);
    printf("\nEnter the new size: ");
    scanf("%u", &uSize);
    piValue = realloc(piValue, uSize * sizeof(int));

    if(NULL == piValue) {
        printf("Reallocation memory error!\n");
        exit(2);
    }

    printf("Addresses of reallocated memory: %p\n", piValue);
    free(piValue);
    
    return 0;
}