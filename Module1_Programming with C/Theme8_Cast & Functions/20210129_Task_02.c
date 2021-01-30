/*Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */
#include <stdio.h>
const float g_pi = 3.14159;

void findS(float r);
float area();

int main(void) {
    
	findS(area());

    return 0;
}

float area(){
    float r = 0;
	printf("Enter a radius:\n");
	scanf("%f", &r);
    return r;
}

void findS(float r){
	float s = g_pi * r * r;
	printf("S = %.2f\n", s);
}