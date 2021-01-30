/*Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.
*/
#include <stdio.h>

void bin(unsigned n);

int main(void) {
    unsigned n = 0;
    printf("Input n: ");
    scanf("%d", &n);
    bin(n);
    return 0;
}

void bin(unsigned n) {
    unsigned i;
	for (i = 1 << 7; i > 0; i = i >> 1)
		(n & i)? printf("1"): printf("0");
	printf("\n");
}