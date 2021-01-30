/*Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него.
*/
#include <stdio.h>
#include <math.h>
#include "library.h"

int main(void) {

    smallestMultiple();
    returnPositiveNumbers();
    squareRoot();

    return 0;
}

void smallestMultiple() {
    int a = 0;
    int b = 0;

    printf("Enter two positive numbers: \n");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;

    while(1) {
        if (max % a == 0 && max % b == 0) {
            printf("The the smallest positive integer that is divisible by %d and %d is: %d.\n", a, b, max);
            break;
        }
        ++max;
    }
    return;
}

float returnPositiveNumbers() {
    float a = 0;
    printf("If you enter a negative number the program will make it positive.\n");
    printf("Enter a number(float/int): \n");
    scanf("%f", &a);
    a = abs(a);
    
    printf("The positive number is: %.2f\n", a);

    return a; 
}

void squareRoot() {
    float number = 0;
    float result = 0;
    printf("If you enter a number you will see its square root.\n");
    printf("Enter a number(float/int): \n");
    scanf(" %f", &number);
    
    if (number < 0) {
        printf("You entered a negative number. The positive is : %.2f\n", returnPositiveNumbers(number));
    } else {
        result = sqrt(number);
        printf("SquareRoot from your number is : %.2f\n", result);
    }
    return;
}