/*Задача 4. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/

#include <stdio.h>
#include <stdlib.h>
#define traceTest(...) printf("TRACE: " __VA_ARGS__)

int main(void){

    traceTest("My favourite chars are : %c, %c, %c\n",'m', 'd', 'o');

    return 0;
}