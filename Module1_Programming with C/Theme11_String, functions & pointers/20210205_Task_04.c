/*Задача 3.Какво е грешното на този код?
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}*/
#include <stdio.h>

void my_strcpy(char *t, char *s);

int main(void) {
    char t[] = {"Programming"};
    char s[10];
    my_strcpy(t, s);
    return 0;
}

void my_strcpy(char *t, char *s){
    for(; (*s = *t); t++, s++) { //first we should *s = *t, and the incrementation
    printf("%c", *s);
    }
    return;
}