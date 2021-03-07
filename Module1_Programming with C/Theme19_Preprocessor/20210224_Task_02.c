/*2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.*/

#include <stdio.h>
#include <stdlib.h>

#define swap(t,x,y) {t temp = x; x = y; y = temp;}

int main(void){

    int x = 5, y = 2;
    printf("Before swap: X: %d\t Y: %d\n",x,y);
    swap(int,x,y);
    printf("After swap: X: %d\t Y: %d\n",x,y);

    return 0;
}