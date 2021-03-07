/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/

#include <stdio.h>
#include <stdlib.h>

typedef int* pointerDef;
int add(int *a,int *b);

typedef int (*t_pointerDef)(int*,int*);
t_pointerDef ptrSum = NULL;

int main(void){

    int a = 4, b = 3;
    pointerDef p1,p2;
    p1 = &a;
    p2 = &b;
    int result = 0;
    result = add(p1,p2);
    printf("Result of add is: %d\n", result);
    ptrSum = &add;
    printf("Result, using add pointer is: %d\n", ptrSum(p1,p2));

    return 0;
}

int add(int *a,int *b){
    return *a + *b;
}