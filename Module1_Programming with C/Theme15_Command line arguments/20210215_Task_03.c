/*Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/
#include <stdio.h>

int main(){
    int *ip;
    float *fp;
    char *cp;

    int a = 3;
    float b = 3.5;
    char c = 'a';

    ip = &a;
    fp = &b;
    cp = &c;

    printf("ip = %d, fp = %.2f, cp = %c", *ip, *fp, *cp);
    
    return 0;
}