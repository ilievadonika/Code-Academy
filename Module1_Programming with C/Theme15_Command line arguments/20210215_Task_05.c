/*Задача 5.
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата)*/
#include <stdio.h>

int main(int argc, char **argv) {
    /*int *pi = &num; This is not valide*/
    int num = 34;
    int *pi = &num;
    int *pii = &num;
    printf("Multiplication: %d * %d = %d", *pi, *pii, *pi * *pii);

    return 0;
}