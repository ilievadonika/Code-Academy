/*Задача 12: Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int arr [10][10][10] = {0};
    int limit = 1000;
    int *pointer = &arr;
    
    int count = 0;
    int total = 0;
    int average = 0;

    while (count < limit) {
        *pointer = rand() % limit;
        total += *pointer;
        pointer++;
        count++;
    }
    average = total / limit;
    printf("The average: %d", average);
    return 0;
}