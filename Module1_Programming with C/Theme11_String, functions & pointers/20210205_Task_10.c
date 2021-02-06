/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/
#include <stdio.h>
#include <string.h>

void mystrncpy(char *, char *, int);

int main(void) {
    char dest[] = "ABCDEF";
    char source[] = "GHIJ";

    mystrncpy(dest, source, 4);
    printf("%s\n", dest);
    
    return 0;
}
void mystrncpy(char *dest, char *source,int n)
{
    while(*source && n-- > 0)
        *dest++ = *source++;

    int extra = strlen(dest) - n;

    while (extra-- > 0) {
        *dest++;
    }

    *dest = '\0';
}

