/*Задача 2. Прост пример за използване на масив: Реализация на класическия
алгоритъм сито на Ератостен ( III век преди н. е.) за намиране на всички прости
числа в интервал от 0 до n: */

#include <stdio.h>
#define n 100

int main(void){
    int i, j, a[n];

    for (i = 2; i < n; i++) 
        a[i] = 1;
    for (i = 2; i < n; i++)
        if (a[i])
            for (j = i; i * j < n; j++) 
                a[i*j] = 0;
    printf("1 ");
    for (i = 2; i < n; i++)
        if (a[i]) 
            printf("%d ",i);

    return 0;
}

