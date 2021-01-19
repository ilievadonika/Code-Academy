/*Упражнение 11. Increment / decrement operators*/
/* Какво става, ако се препълни броячът? */
#include <stdio.h>

int main(void){
    int iCounter = 0;
    while( ++ iCounter < 3 ) {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++ iCounter);
        printf("-- Counter: %d\n", -- iCounter);
        printf("Counter ++: %d\n", iCounter ++);
        printf("Counter --: %d\n", iCounter --);
    }
//ако броячът се препълни, в този случай ще излее от while цикъла, принтирайки последната стойност

    return 0;
}
