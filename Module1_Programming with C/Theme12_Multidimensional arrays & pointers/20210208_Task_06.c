/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */
#include <stdio.h>

int maxValue(int arr[]);

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("The max element from the array is %d.", maxValue(arr));
    return 0;
}
int maxValue(int arr[]) {
    int max = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}