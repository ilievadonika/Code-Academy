/*Задача 7.
Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана.*/
#include <stdio.h>

int main(int argc, char **argv) {
    int num = 2;
    int *ip = &num;
    int sum = *ip + 5;

    printf("Sum ot (pointer)%d + 5 = %d", *ip, sum);
    
    return 0;
}