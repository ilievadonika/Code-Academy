/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include <stdio.h>

int main(void) {
    int arr[3];
    int i;
    for(i = 0; i < 3; i++){
        printf("Input your number for element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("You array is: [");

    for(i = 0; i < 3; i++){
        printf(" %d ", arr[i]);
    }
    printf("]");

    return 0;
}