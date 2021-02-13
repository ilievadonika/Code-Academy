/*Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned uIn = 0;
    unsigned uNumElements = 0;
    int *pValue = NULL;
    int iSum = 0;

    printf("Enter numbers of elements: ");
    scanf("%u", &uNumElements);

    pValue = (int*)malloc(uNumElements*sizeof(int));

    for(int i = 0; i < uNumElements; i++) {
        printf("Enter element %d: ", i + 1);
        scanf(" %d", (pValue + i));
        iSum += *(pValue + i);
    }

    printf("\nSum of the array elements is: %d\n", iSum);
    free(pValue);

    return 0;
}