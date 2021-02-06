/*Задача 11. Дефиниране и инициализация на двумерен масив*/

#include <stdio.h>
int main(void) {
    int aiValue[][3] = { { 1, 2,3 }, { 5, 6, 7 } };
    for (int i = 0; i < 2; i ++)
    for (int j = 0; j < 3; j++){
        printf("aiValue [%d] [%d] : %d\n", i, j,
        aiValue[i][j]);
    }
    return 0;
}


