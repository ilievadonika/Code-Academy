/*
Направете програма за изчисляване на баркод UPC(Universal Product Code)
Производителите на стоки от години поставят баркодове на своите продукти. Всеки баркод представлява 12 числа:
Първото число е типа на продукта
Лявата група числа представят производителя,
Дясната група числа представят продукта
Последното число е за проверка.

0 13800 15173 5

Ето алгоритъма за изчисление на проверката за грешка:
Съберете нечетните числа: първото, третото, петото и т.н.
Съберете четните числа: второто, четвъртото и т.н
Умножете първата сума по 3 и добавете втората сума.
Извадете 1 от тотала
Делите тотала по модул на 10.
Изваждате резултата от 9 и трябва да получите последната цифра.

*/
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
    int sumOdd = a[0] + a[2] + a[4] + a[6] + a[8] +a [10]; //8
    int sumEven = a[1] + a[3] + a[5] + a[7] + a[9];//26
    int total = (sumOdd * 3) + sumEven;//24 +26 = 50
    total -= 1; //49
    total %= 10; // 9
    total = 9 - total; //0

    if (total == a[11]) {
        printf("The code is valid.");
    }
    else {
        printf("The code is not valid.");
    }
    return;
}

void arrayInput(int a[]) {
    printf("Enter the 12-digit UPC code: ");
    for (int i = 0; i < sizeOfUPC; ++i) {
       a[i] = getchar() - '0';
    }
    for (int i = 0; i < sizeOfUPC; i++) {
        printf("%d ", a[i]); 
    }
        printf("\nThe code is ready!\n");
    return;
}
//0 13800 15173 5
