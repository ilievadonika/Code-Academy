/*Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.*/
#include <stdio.h>
#define CONST_PI (3.14159)

void findS(float r);

int main(void) {
	float r = 0;
	printf("Input r: ");
	scanf(" %f", &r);

	findS(r);

    return 0;
}

void findS(float r){
	float s = CONST_PI * r * r;
	printf("S = %.2f\n", s);
}