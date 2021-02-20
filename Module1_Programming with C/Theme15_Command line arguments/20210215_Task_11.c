/*Задача 11.
Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери*/
#include <stdio.h>

int main(int argc, char **argv) {
    int a = 10;
    int b = 5;
    int *pa = &a;
    int *pb = &b;

    char ch = '5';
    char *pch = &ch;
    float c = 5.5;
    float *pc = &c;

    printf("Multiplication of pointers: %d * %d = %d\n", *pa, *pb, *pa * *pb);
    printf("Multiplication of diff type values: '%c' * %d = %d\n", *pch, *pa, *pch * *pa);
    printf("Multiplication of diff type values: %.2f * %d = %.2f", *pc, *pa, *pc * *pa);
    return 0;
}