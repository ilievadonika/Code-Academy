/* Упражнение 15. Условен оператор (?:)
а) въведете стойност за nA с scanf
b) използвайте условния оператор за намиране на максималното от две
числа*/
#include <stdio.h>

int main(void){
    int nA;
    int nB = ( nA == 1 ? 2 : 0 ); /* сравнява число */
    printf("Input value for nA: ");
    scanf("%d", &nA);
    printf("A value is %d\n", nA); 
    printf("B value is %d\n",
    nB);
    int max = nA > nB ? 1 : 0;
    if(max == 1){
        printf("Max value is: %d", nA);
    }else{
        printf("Max value is: %d", nB);
    }
    

    return 0;
}
