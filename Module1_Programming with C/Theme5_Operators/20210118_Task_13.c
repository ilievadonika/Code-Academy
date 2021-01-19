/*Упражнение 13. Логически оператори*/
/* опитайте различни комбинации, следете приоритета на
операторите */
#include <stdio.h>

int main(void){
    int nA; /* използвайте scanf */
    int nB;
    int nX;
    int nY;

    printf("Input value for nA: ");
    scanf("%d", &nA);
    printf("Input value for nB: ");
    scanf("%d", &nB);
    printf("Input value for nX: ");
    scanf("%d", &nX);
    printf("Input value for nY: ");
    scanf("%d", &nY);

    if ( nA > nB && nA !=0 ) {
    printf("&& Operator : Both conditions are true\n");
    }
    if ( nX > nY || nY != 20) {
    printf("|| Operator : Only one condition is true\n");
    }
    if ( ! (nA > nB && nB !=0 ) ) {
    printf(" ! Operator : Both conditions are true\n");
    } else {
    printf("Both conditions are true.\n");
    }

    if((nY && nX) != (nA || nB)){
        printf("!= Operator: The conditions are equal.\n");
    }else{
        printf("The conditions are not equal");
    }
    

    return 0;
}