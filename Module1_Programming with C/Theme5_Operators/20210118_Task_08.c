/*Упражнение 8*. Напишете функция int isLetter(char c), която проверява дали
подадения параметър е буква или не е буква от ASCII таблицата. Из*/
#include <stdio.h>

int isLetter(char c);
int main(void){
    char c;
    printf("Input char or other symbol: " );
    scanf("%c", &c);
    isLetter(c);
    return 0;
}
int isLetter(char c){
    int function = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    if (function == 1){
        printf("You symbol is char!");
    } else if(function == 0){
        printf("Your symbol is not a char.");
    }   
}