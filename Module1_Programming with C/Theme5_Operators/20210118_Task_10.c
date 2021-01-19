/*Упражнение 10. Оператори за присвояване*/
/* използвайте и други оператори за присвояване */

#include <stdio.h>

int main(void){
    int nResult = 12; /* опитайте с други стойности */
    int nX = 10;
    printf("Result = %d\n", nResult);
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);
    nResult *= nX;
    printf("Result *= %d -> %d\n", nX, nResult);
    nResult /= nX;
    printf("Result /= %d -> %d\n", nX, nResult);
    nResult %= nX;
    printf("Result %%= %d -> %d\n", nX, nResult);
    nResult -= nX;
    printf("Result -= %d -> %d\n", nX, nResult);
    nResult >>= nX;
    printf("Result >>= %d -> %d\n", nX, nResult);
    nResult &= nX;
    printf("Result &= %d -> %d\n", nX, nResult);
    nResult ^= nX;
    printf("Result ^= %d -> %d\n", nX, nResult);
    nResult |= nX;
    printf("Result |= %d -> %d\n", nX, nResult);

    return 0;
}
