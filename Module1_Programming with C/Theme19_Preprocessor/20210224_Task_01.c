/*1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.
*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define E 2.72

int main(void){

    float result = PI * E;
    printf("Result: %f\n",result);

    return 0;
}
