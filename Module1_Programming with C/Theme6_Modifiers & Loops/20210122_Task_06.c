/* Задача 7.6. Принтирайте числата от 13 до 19 като използваме for
цикъл.*/
#include <stdio.h>

int main(void) {
    int a = 13;
    int b = 19;

    printf("Numbers from 13 to 19: \n");
    for(int i = a; i <= b; i++) {
        printf("%d \n", i);
    }
    return 0;
}