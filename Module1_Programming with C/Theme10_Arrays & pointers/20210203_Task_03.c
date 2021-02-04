/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/
#include <stdio.h>

int lineSearch(int a[], int l, int d);

int main(void) {
    int a[] = {1, 2, 3, 4, 5, 6};
    int lenght = sizeof(a)/ sizeof(a[0]);
    int number = 1;

    printf("Position of the element: %d", lineSearch(a, lenght, number) + 1);
    return 0;
}
int lineSearch(int a[], int l, int d){
    int i;
 
    for (i = 0 ; i < l ; i++ ) {
      if (a[i] == d)
         return i;
   }
 
   return -1;
}