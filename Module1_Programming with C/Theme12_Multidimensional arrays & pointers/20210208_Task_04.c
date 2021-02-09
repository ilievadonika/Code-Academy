/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.
*/
#include <stdio.h>

float averageValue(int arr[], int n);
int main(void) {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Your matrix is: ");
    for(int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\nThe avreage value of the matrix elements is: %.2f", averageValue(arr, n) );

    return 0;
}

float averageValue(int arr[], int n) {
    float result = 0;
    for(int i = 0; i < n; i++){
        result += arr[i];
    }
    result = result / n;

    return result;
}