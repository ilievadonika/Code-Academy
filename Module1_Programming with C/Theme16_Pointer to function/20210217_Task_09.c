/*Задача 9.
Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/
#include <stdio.h>

void printArray(int (*p3d)[3][2]);

int main(int argc, char **argv) {
    // initializing a 3-dimensional array 
    int x[2][3][2] = 
    { 
        { {0,1}, {2,3}, {4,5} }, 
        { {6,7}, {8,9}, {10,11} } 
    }; 
    
    int (*p_to_arr3d)[3][2] = x;

    void (*pa)(int (*)[3][2]) = printArray;
    pa(p_to_arr3d);

    return 0; 
}

void printArray(int (*p3d)[3][2]) {
    // output each element's value with 3 for loops
    for (int i = 0; i < 2; ++i) { 
        for (int j = 0; j < 3; ++j) { 
            for (int k = 0; k < 2; ++k) { 
                printf("Element at x[%d][%d][%d] = %d\n", i, j, k, p3d[i][j][k]);
            } 
        } 
    } 
    return;
}
