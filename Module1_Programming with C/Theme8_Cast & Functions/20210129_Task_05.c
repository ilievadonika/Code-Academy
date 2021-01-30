/*Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/
#include <stdio.h>

void evenOrOdd(int a);
int main(void) {
    int a = 0;
    
    printf("Input a: ");
    scanf(" %d", &a);
    evenOrOdd(a);

    return 0;
}
void evenOrOdd(int a) {
    if (a % 2 == 0) {
        printf("The number is even!");
    } else {
        printf("The number is odd!");
    }
    return;
}