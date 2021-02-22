/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int substract(int a, int b);
int multiplicate(int a, int b);
int devide(int a, int b);

int main(int argc, char **argv){
    int input = 0;
    int a = 0;
    int b = 0;

    int (*func_ptr[4])() = {add, substract, multiplicate, devide};

    printf("Enter function number you want:\n");
    printf("0. To add two numbers.\n");
    printf("1. To substract two numbers.\n");
    printf("2. To multiplicate two numbers.\n");
    printf("3. To devide two numbers.\n");
    printf("Your choice is: \n");
    scanf(" %d", &input);

    printf("Enter a number for a: \n");
    scanf(" %d", &a);
    printf("Eneter a number for b: \n");
    scanf(" %d", &b);

    if(input == 3 &&  b == 0){
        printf("Invalid operation. You cant devide by 0.\n");
    } else{
         printf("Result is %d", func_ptr[input](a, b));
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int substract(int a, int b) {
    return a - b;
}
int multiplicate(int a, int b) {
    return a * b;
}

int devide(int a, int b){
    return a / b;
}