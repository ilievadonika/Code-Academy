/*Задача 7.9. if-else конструкция*/
#include <stdio.h>

int main(void){
    int nValue = 123;
    int nMod3 = nValue % 3; /* делене с остатък */
    if (0 == nMod3) {
    /* проверява дали няма остатък, и ако е така, значи се дели на 3 */
        printf("%d is divided by 3\n", nValue);
    } else {
        printf("%d is not divided by 3\n", nValue);
    }
    
    return 0;
}
