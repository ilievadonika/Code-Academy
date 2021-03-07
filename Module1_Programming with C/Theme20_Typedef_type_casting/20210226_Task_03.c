/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/

#include <stdio.h>
#include <stdlib.h>

typedef int* intPType;

int main(void){

    int a = 4;
    intPType test = &a;
    printf("Address of a is: %p\n", &a);
    printf("Address of intPType is: %p\n", test);
    printf("intPType : %d\n", *test);

    return 0;
}