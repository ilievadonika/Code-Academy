/*Задача 7.7.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.*/
#include <stdio.h>

int main(void) {
    int c;
    int countLetters = 0;
    int countNumbers = 0;

    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z')) {
            countLetters++;
        } else if (c >= '0' && c <= '9') {
            continue;
        }
        countNumbers++;
    }
    printf("Count of letters: %d\n", countLetters);
    printf("Count of numbers: %d\n", countNumbers);

    return 0;
}