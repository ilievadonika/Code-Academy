/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/
#include <stdio.h>

void lower(char s[]);

int main(void) {
    char str[] = {"Donika"};

    printf("The original string: \"%s\"", str);
    lower(str);
    printf("\nChanged string : \"%s\"", str);
    return 0;
}
void lower(char s[]) {
    const int changer = 32;
    int i = 0;
    while(s[i] != '\0') {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + changer;
        }
        i++;
    }
    return;
}