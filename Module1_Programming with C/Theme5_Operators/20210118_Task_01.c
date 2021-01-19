/*Задача 1: имаме две променливи int x = 10; и int y = 10;
създайте две променливи int true, false; На първата присвоете
резултата от сравнението на х == у, а на втората х != у принтирайте
с printf променливите true и false.
*/
#include <stdio.h>

int main(void){
    int x = 10;
    int y = 10;
    int true;
    int false;

    true = x == y;
    false = x != y;

    printf("%d\n", true);
    printf("%d\n", false);

    return 0;
}