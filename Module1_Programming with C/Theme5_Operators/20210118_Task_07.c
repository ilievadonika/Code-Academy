/*Задача 7: Условен оператор (?:)
а) въведете стойност за nA с scanf
b) използвайте условния оператор за намиране на максималното от две числа*/
#include <stdio.h>

int main(void){
    int nA = 1;
    int nB = ( nA == 1 ? 2 : 0 ); /* сравнява число */
    printf("A value is %d\n", nA); 
    printf("B value is %d\n", nB);
    printf("Input value for nA: ");
    scanf("%d", &nA);
    printf("New value is: %d\n", nA);
    int max = (nA > nB ? nA : nB);
    printf("The max number is: %d\n", max);

    return 0;
}
