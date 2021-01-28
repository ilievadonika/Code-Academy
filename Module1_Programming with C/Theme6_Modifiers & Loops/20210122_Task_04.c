/*Задача 7.4. Да се изчисли сумата на целите числа в
зададен диапазон [a, b] – използване на цикъл с пред-условие –
оператор while.
*/
#include <stdio.h>

int main(void) {
    int a = 0;//2 
    int b = 0;//4
    int sum = 0; 

    printf("a = ");
    scanf(" %d", &a); 
    printf("b = ");
    scanf(" %d", &b);

    sum = a + b; //6
    while ((a + 1) < b) {
        a++;//3
        sum += a;
    }
    printf("Sum of the integers in the range [a : b] is %d", sum);

    return 0;
}