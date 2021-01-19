/*Упражнение 12. Relational operators*/
/* използвайте и останалите оператори за сравнение */
#include <stdio.h>

int main(void){
    int nX; 
    int nY;
    printf("Input value for nX: ");
    scanf("%d", &nX);
    printf("Input value for nY: ");
    scanf("%d", &nY);

    if (nX == nY) {
        printf("%d and %d are equal\n", nX, nY);
    } else {
        printf("%d and %d are not equal\n", nX, nY);
    }

    if (nX > nY) {
        printf("%d is greater than %d\n", nX, nY);
    } else if (nX < nY){
        printf("%d is less than %d\n", nX, nY);
    }

    if (nX >= nY){
        printf("%d is greater or equal than %d\n", nX, nY);
    } else if(nX <= nY){
     printf("%d is less and not equal than %d\n", nX, nY);   
    }

    if(nX != nY){
        printf("%d is not equal to %d\n", nX, nY);
    } else{
        printf("%d is equal to %d\n", nX, nY);
    }
    
    

    return 0;
}