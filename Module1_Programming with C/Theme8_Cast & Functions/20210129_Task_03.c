/*Задача 3. Напишете функция, която връща резултат (а+в)*4.*/
#include <stdio.h>

int returnResult();
int main(void) {
    printf("(a + b) * 4 = %d", returnResult());
    return 0;
}

int returnResult(){
    int a = 0;
    int b = 0;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    int result = (a + b) * 4;
    return result;
}