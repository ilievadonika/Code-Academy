/*Задача 4. Използвайте предефинирани макроси*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("File : %s\n", __FILE__); /* текущ файл */
    printf("Date : %s\n", __DATE__); /* дата */
    printf("Time : %s\n", __TIME__); /* време */
    printf("Line : %d\n", __LINE__); /* ред */
    printf("ANSI : %d\n", __STDC__); /* ANSI */

    return 0;
}