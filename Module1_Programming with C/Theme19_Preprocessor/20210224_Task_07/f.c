#include "header.h"

int two(void){
    return 2;
}

void foo(void){
    int a = two();
    printf("A is: %d",a);
    
}