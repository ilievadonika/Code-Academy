/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/
#include <stdio.h>

int multiplyNums(int a);

int main(void) {
    int number = 30;
    printf("Result = %e", multiplyNums(number));

    return 0;
}

int multiplyNums(int a) {
    int result = 1;
    if (a > 1) {
        result *= multiplyNums(a - 1);
    }
    return result * a;
}