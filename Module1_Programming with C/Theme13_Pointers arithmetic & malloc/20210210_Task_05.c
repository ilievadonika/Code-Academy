/*Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}*/
#include <stdio.h>

int sum_array(int *arr, int n);

int main(void) {
    int arr[5];
    int n = 5;

    sum_array(arr, n);

    return 0;
}

int sum_array( int *arr, int n) {
    int i = 0;
    int sum = 0;
    int *ptr;

    printf("\nEnter array elements (5 integer values):\n");

    for(i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    ptr = arr;

    for(i = 0; i < n; i++) {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nThe sum is: %d", sum);
}