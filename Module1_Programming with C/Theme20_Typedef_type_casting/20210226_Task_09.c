/*Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int iValue = 31;
    int iDiv = 6;
    double dfRes = 0.0;

    dfRes = (double) iValue / iDiv;

    printf("Value of dfResof: %lf, V/D (without casting): %lf\n", dfRes, iValue/iDiv);

    return 0;
}