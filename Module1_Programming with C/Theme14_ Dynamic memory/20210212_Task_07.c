/*Задача 7.
Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

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