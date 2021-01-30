/*Задача 4. Напишете функция, която връща резултат a*2 + b*c.*/
#include <stdio.h>

int returnResult(int a, int b, int c);
int main(void) {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Input a: ");
    scanf(" %d", &a);
    printf("Input b: ");
    scanf(" %d", &b);
    printf("Input c: ");
    scanf(" %d", &c);
    printf("(a * 2) + (b * c) = %d", returnResult(a, b, c));

    return 0;
}
int returnResult(int a, int b, int c) {
    int result = (a * 2) + (b * c);
    return result;
}