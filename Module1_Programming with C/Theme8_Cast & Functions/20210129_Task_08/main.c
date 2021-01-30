/*Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.
*/
#include <stdio.h>
#include "f.h"

int main(void) {
    int a = 1;
    int b = 2;
    int c = 3;

    printf("a + b = %d\n", add(a, b));
    printf("c++ = %d", incr(c));
    return 0;
}
