#include <stdio.h>
/*Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях?
*/
int main(void) {
    int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = c;

    printf("*p = %p", p);
    
    return 0;
}