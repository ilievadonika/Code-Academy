/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/
#include <stdio.h>

int multiplyNums(int a);

int main(void) {
    int number = 1;
    printf("Result = %e", multiplyNums(number));

    return 0;
}

int multiplyNums(int a) {
    int result = 1;
    while(a <= 30) {
        result *= a;
        a++;
    }
    return result;
}