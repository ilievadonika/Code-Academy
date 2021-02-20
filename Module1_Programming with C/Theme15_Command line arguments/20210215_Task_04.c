/*Задача 4.
Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/
#include <stdio.h>

int main(int argc, char **argv) {
    int *ip;
    int a = 3;
    ip = &a;
    
    printf("Pointer value: %p", *ip); 
    return 0;
}