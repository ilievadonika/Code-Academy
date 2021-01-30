/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл*/

#include <stdio.h>
#include "library.h"

/* main call function 1*/
int main(void) {
    
	printFinalResult(); /*function 1*/

    return 0;
}
/* function 1 call function 2*/
void printFinalResult() {
    
    printf("The final result is: %d", manipulateNumbers());
    return;
}
/* function 2 call function 3*/
int manipulateNumbers() {
    int a = addNumbers(a);
    int b = addNumbers(b);

    int result = 0;

    printf("\nYour numbers are a = %d, b = %d\n\n", a, b);
    int input = 0;
    printf("1. For operation 'ADD' press 1.\n");
    printf("2. For operation 'SUBSTRACT' press 2.\n");
    printf("2. For operation 'MULTIPLICATION' press 3.\n");
    printf("2. For operation 'DIVISION' press 4.\n");
    printf("You choose: ");
    scanf(" %d", &input);

    switch(input) {
        case 1: 
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4: 
            result = a / b;
            break;
    }
    return result;
}
/* function 3*/
int addNumbers(int n){
    
    printf("Input number: ");
    scanf(" %d", &n);
    
    return n;
}

