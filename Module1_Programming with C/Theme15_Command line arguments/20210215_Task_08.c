/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/
#include <stdio.h>

int main(int argc, char **argv) {
    int n = 5;
    int *ip = &n;

    printf("Pointer adress: %p", *ip);
    
    return 0;
}