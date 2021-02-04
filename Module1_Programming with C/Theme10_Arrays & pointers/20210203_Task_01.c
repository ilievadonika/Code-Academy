#include <stdio.h>

int main(void) {
    char charArray[3];
    int integerArray[3];
    double floatArray[3];

    printf("Size of char array is %d Bytes\n", sizeof(charArray));
    printf("Size of int array is %d Bytes\n", sizeof(integerArray));
    printf("Size of double array is %d Bytes\n", sizeof(floatArray));

    return 0;
}