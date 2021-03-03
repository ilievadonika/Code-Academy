/*Задача 14. Използвайки предишното упражнение, опишете структурите и
прототипите на функциите в отделен заглавен файл с разширение *.h, a
телата на функциите в един или няколко *.c сорс файлове.*/

#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(void) {
    struct Employee emps[countEmp];
    fillStruct(emps);
    printStruct(emps);

    return 0;
}

