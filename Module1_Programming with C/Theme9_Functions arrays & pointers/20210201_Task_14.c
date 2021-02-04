/*Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му*/
#include <stdio.h>

int getline(char s[],int lim);

int main(void) {
    char str[31];
    int limit = 30;
    printf("Lenght for the line is: %d", getline(str, limit));

    return 0;
}
int getline(char s[], int lim) {
    int c, i;
    printf("Input your text in line: ");
    for (i = 0; (i < (lim - 1)) && ((c = getchar()) != EOF) && (c != '\n'); i++) {
        s[i] = c;
    }
    if (c == '\n') {    
        s[i++] = c;
    }
    s[i] = '\0';
     
    return i - 1;
}