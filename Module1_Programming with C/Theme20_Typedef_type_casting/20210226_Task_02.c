/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/

#include <stdio.h>
#include <stdlib.h>

typedef long long int lli;

void printLLI(lli a);

int main(void){

    lli a = 100000000;
    printLLI(a);

    return 0;
}

void printLLI(lli a){

    printf("Testing the lli type: %lld\n",a);
    printf("Size of lli type: %d\n",sizeof(lli));
}