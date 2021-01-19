/* Упражнение 17* Направете генератор на случайни числа по следния
алгоритъм (xorshift): 
При всяка итерация изведете числото на екрана.
(Направете вариация с акумулатор long long int)
*/
#include <stdio.h>

int main(void){
    int A = 1;
    
    A ^= A << 13;
    printf("A = %d\n", A);
    A ^= A >> 17;
    printf("A = %d\n", A);
    A ^= A << 5;
    printf("A = %d\n", A);

    long long B = 65280;
    
    B ^= B << 13;
    printf("B = %lld\n", B);
    B ^= B >> 17;
    printf("B = %lld\n", B);
    B ^= B << 5;
    printf("B = %lld\n", B);

    return 0;
}
