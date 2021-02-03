/*Задача 5. Рекурсивна функция*/

#include <stdio.h>

int RecursiveFun(int nA, int nB);

int main(void) {
    printf("RecursiveFun: %d\n", RecursiveFun(5, 7));

    return 0;
}
int RecursiveFun(int nA, int nB) {
    int nValue = 1;
    if (nA > 1 && nB > 1) {
    nValue += RecursiveFun(nA - 1, nB - 1); 
    } 
    /* сумира числата, докато и двете са по-големи от 1 */
    return (nA + nB + nValue);
}