/*Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг)*/

#include <stdio.h>
#include <stdlib.h>

#define MY_STR(x) #x

int main(){
    int num = 70;
    printf(MY_STR(num));

    return 0;
}