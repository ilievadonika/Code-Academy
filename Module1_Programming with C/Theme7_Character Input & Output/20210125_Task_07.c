/*Задача 7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.*/
#include <stdio.h>

static const int minLenght = 80;
int main(void) {
    char buffer[minLenght];
    int c;

    for (int i = 0; (c = getchar()) != EOF; ++i) {
        if (i < minLenght - 1)
            buffer[i] = c;
        else {
            if (i == minLenght - 1) {
                buffer[i] = '\0';
                printf("%s", buffer);
            }   
            printf("%c", c);
        }
    }
    return 0;
}
