/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/
#include <stdio.h>

void our_strcat(char *s, char *t);

int main(void) {
    char s[35] = {"I love"};
    char t[] = {" C programming!"};

    our_strcat(s, t);
    printf("%s", s);
    return 0;
}

void our_strcat(char *s, char *t) {
    while(*s)
           s++; /* go to the end of s*/

    /* copy t at the end of s*/
    while(*t)
    *(s++) = *(t++) ;
    return;
}
