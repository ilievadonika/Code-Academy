#include <stdio.h>

int main(void) {
    char charArray[] = {"iam"};
    int integerArray[] = {1, 2, 3};
    double floatArray[] = {2.3, 4.5, 5.6};

    printf("Size of char array is %d Bytes\n", sizeof(charArray));
    printf("Size of integer array is %d Bytes\n", sizeof(integerArray));
    printf("Size of double array is %d Bytes\n", sizeof(floatArray));

    printf("The third element in a char array is: %c\n", charArray[2]);
    printf("The third element in a integer array is: %d\n", integerArray[2]);
    printf("The third element in a char array is: %.2f\n", floatArray[2]);

    return 0;
}