/*Задача 6.
Дефинирайте променлива „а“, дeфинирайте пойнтер към
нея, присвоете му адреса на променливата. През пойнтера
задайте нова стойност = 5 на променливата „а“. Каква е
стойността на “а”?*/
#include <stdio.h>

int main(int argc, char **argv) {
    char a = 'a';
    char *pc = &a;
    printf("value of a: %c\n", a);
	printf("value of a: (using pointer): %c\n", *pc);

	//updating the value
	*pc = '5';

	printf("value of a: %c\n", a);
	printf("value of a (using pointer): %c\n", *pc);

    return 0;
}