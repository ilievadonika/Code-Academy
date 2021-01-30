#include <stdio.h>

void verifyTheUPC(int a[]);
void arrayInput(int a[]);

const int sizeOfUPC = 12;

int main(void) {

    int barcode[13];

    arrayInput(barcode);
    verifyTheUPC(barcode);

    return 0;
}
void verifyTheUPC(int a[]) {
    int sumOdd = a[0] + a[2] + a[4] + a[6] + a[8] +a [10];
    int sumEven = a[1] + a[3] + a[5] + a[7] + a[9] + a [11];
    int total = (sumOdd * 3) + sumEven;
    total -= 1;
    total %= 10;
    total -= 9;

    if (total == a[12]) {
        printf("The code is valid.");
    }
    else {
        printf("The code is not valid.");
    }
    return;
}

void arrayInput(int a[]) {
    printf("Enter the 12-digit UPC code: ");
    for (int i = 0; i <= sizeOfUPC; i++) {
       scanf("%d", &(a[i]));
    }
    printf("%d", a);
    printf("The code is ready!\n");
    return;
}
//0 13800 15173 5
