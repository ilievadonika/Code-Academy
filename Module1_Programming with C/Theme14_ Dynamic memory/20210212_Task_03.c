/*Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* dynamic_array_int_init(unsigned uSize);
void dynamic_array_int_deinit(int* dynamicArray);
int* dynamic_array_int_resize(int* dynamicArray, unsigned uOldSize, unsigned uNewSize);

int main(void) {
    int* dynamicArray = NULL;
    unsigned uSize = 0;
    unsigned newSize = 0;

    printf("\nEnter size of the array: ");
    scanf("%u", &uSize);

    dynamicArray = dynamic_array_int_init(uSize) ;

    if(NULL == dynamicArray) {
        printf("Allocation memory error!\n");
        exit(1);
    }

    for(int i = 0; i < uSize; i++) {
        printf("Enter element %u: ", i + 1);
        scanf(" %d", (dynamicArray + i));
    }
 
    printf("Lets extend the size of your array.");
    printf("\nEnter the new size: ");
    scanf("%u", &newSize);

    dynamicArray = dynamic_array_int_resize(dynamicArray, uSize, newSize);

    if(NULL == dynamicArray) {
        printf("Reallocation memory error!\n");
        exit(2);
    }

    for(int i = uSize; i < newSize; i++) {
        printf("Enter element %u: ", (i + 1));
        scanf(" %d", (dynamicArray + i));
    }

    return 0;
}

int* dynamic_array_int_init(unsigned uSize) {
    return malloc(sizeof(int) * uSize);
}

void dynamic_array_int_deinit(int* dynamicArray) {
    free(dynamicArray);
    return;
}

int* dynamic_array_int_resize(int* dynamicArray, unsigned uOldSize, unsigned uNewSize) {
    int* piNewArray = dynamic_array_int_init(uNewSize);
    memcpy(piNewArray, dynamicArray, uOldSize * sizeof(int));
    dynamic_array_int_deinit(dynamicArray);
    return piNewArray;
}