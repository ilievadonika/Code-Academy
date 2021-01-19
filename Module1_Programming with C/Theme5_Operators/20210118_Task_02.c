/*Задача 2. какъв ще бъде резултатът в променливата true:
int x = 10;
int y = 10;
int z = 30;
int true = x==y+(z < y)!=20;*/
#include <stdio.h>

int main(void){
    int x = 10;
    int y = 10;
    int z = 30;
    int true = x == y + (z < y) != 20;
 
    printf("%d\n", true);

    return 0;
}