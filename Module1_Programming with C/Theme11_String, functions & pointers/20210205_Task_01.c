/*Задача 1.Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг '\0'. На ваяка итерация пристирайте всеки
един елемент на стринга с printf(“%с”, с)*/
#include <stdio.h>

void printStr(char *s);

int main(void) {
    char s[] = {"Donika"};
    printStr(s);
    return 0;
}
void printStr(char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        printf("%c", s[i++]);
    }
    return;
}