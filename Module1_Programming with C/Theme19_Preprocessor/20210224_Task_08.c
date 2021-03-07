/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)*/

#include <stdio.h>
#include <stdlib.h>

#define MY_TEST(x,y) x ## y 

int main() {
    
    MY_TEST(print,f)("\nThis is test\n");

    return 0;
} 