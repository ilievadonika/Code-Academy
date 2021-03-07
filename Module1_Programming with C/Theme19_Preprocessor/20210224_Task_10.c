/*Задача 10.
 Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define AVG(x,y) { printf("Avg: %.2f\n",(float)(x+y)/2); }

#define multipleAVG(start,end) { float avg;\
int count = 0;\
for(start;start<=end;start++){\
avg += start;\
count++;\
} printf("Multiple AVG is: %.2f\n",avg/count);}

#define numberPower(n,p) { printf("Value is : %f\n",pow(n,p));}

#define toUPPER(c) { printf("To Upper result is: %c\n",(c - 32));}

#define DISP(f,x) { printf("sqrt (%g) = %g\n", x, (f)(x)); }

int main(void){

    int x = 4;
    int y = 6;
    AVG(x,y);

    int start = 1;
    int end = 4;
    multipleAVG(start,end);

    int number = 4;
    int power = 4;
    numberPower(number,power);

    char c = 'c';
    toUPPER(c);

    DISP(sqrt, 3.0);

    return 0;
}