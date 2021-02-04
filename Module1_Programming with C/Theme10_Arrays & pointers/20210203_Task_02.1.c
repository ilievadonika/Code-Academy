#include <stdio.h>

int printArr(int*, int l);

int main(void) {
    int arr[100] = {0};
    int lenght = sizeof(arr);
    int l = sizeof(arr[0]);
    printf("%d\n", lenght);
    printf("%d\n", l);
    printArr(arr, lenght);

    return 0;
}

int printArr(int *a, int l) {
    l = sizeof(a) / sizeof(a[0]);
    printf("Size of the array is: %d\n", l);

    return l;
}