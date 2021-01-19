/*Задача 9. Аритметични оператори*/ 
/* homework: examples for '*' и '+', float - използвайте вместо int*/
#include <stdio.h>

int main(void){
    float iX = 13;
    float iY = 44;
    float iResult = 0;
    iResult = iX + iY;
    printf("%.2f + %.2f = %.2f \n", iX, iY, iResult);
    iResult = iY * iX;
    printf("%.2f * %.2f = %.2f \n", iY, iX, iResult);

    return 0;
}
