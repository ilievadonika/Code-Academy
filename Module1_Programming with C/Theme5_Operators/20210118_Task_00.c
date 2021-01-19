#include <stdio.h>

int main(void){
    int x = 1;
    int y = 2;
    char t;
    t = x < y;
    char f;
    f = x > y;
    printf("True = %d\n", y > x);
    printf("True = %d\n", t);
    printf("False = %d\n", f);
    y = 0;
    f = x && y;
    printf("False && %d\n", f);
    t = x || y;
    printf("t || %d\n", t);
    y = x + 2 * 3;
    printf("y = %d\n", y);
    y = (x + 2) * 3;
    printf("y = %d\n", y);
    return 0;
}