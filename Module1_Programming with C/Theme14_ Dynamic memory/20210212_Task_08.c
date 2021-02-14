/*Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* piValue = NULL;
    unsigned uSize = 0;

    printf("\nEnter size: ");
    scanf("%u", &uSize);
    piValue = alloca(100);

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

    return 0;
}