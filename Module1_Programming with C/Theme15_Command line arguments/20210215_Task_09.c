/*Задача 9. Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“?
*/
#include <stdio.h>

int main(int argc, char **argv) {
    int a = 30;
    int *pc = &a;
    int **ppc = &pc;
    **ppc = 15;

    printf("Value of a: %d", a);
    
    return 0;
}