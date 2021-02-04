/*Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в 
частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.*/
#include <stdio.h>
#include <math.h>

int binarySearch(int a[], int n, int x);
int main(void) {
    int arr[] = {1, 2, 3, 4, 8, 9};
    int lenght = sizeof(arr)/ sizeof(arr[0]);
    int x = 1;

    printf("Position of your number: %d", binarySearch(arr, lenght, x));
    return 0;
}
int binarySearch(int a[], int n, int x) {
    int mid = n / 2;
    
    while(a[mid] != x){
        if(x > a[mid]) {
            mid++;
            if(a[mid] == x) {
                return mid;
            }else{
                return -1;
            }
        }else{
            mid--;
            if(a[mid] == x) {
                return mid;
            }else{
                return -1;
            }
        }
    }
    return mid;
}