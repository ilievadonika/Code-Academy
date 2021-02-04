/*Задача 12. Напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)
*/
#include <stdio.h>

int any(char s1[], char s2[]);

int main(void) {
    char str1[] = {"donika"};
    char str2[] = {"nika"};

    printf("Position: %d", any(str1, str2));

    return 0;
}
int any(char s1[], char s2[]) {
    int i,j,check;

    check = 1;

    for(i = 0; s1[i] != '\0' && check;) 
    { 
        // iterate through s2 while trying to find matching character from s1
        for(j = 0; s2[j] != '\0' && (s1[i] != s2[j]); ++j) 
            ; // continue

        if(s2[j] == '\0') {
            check = 1;
            i++; // go for the next char in s1
        }
        else
            check = 0; // match found
    }

    if(s1[i] == '\0')
        return -1;
    else
        return i;
}