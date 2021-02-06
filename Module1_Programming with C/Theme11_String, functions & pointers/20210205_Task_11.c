/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.
*/
#include <stdio.h>

void mystrncat(char *s, char *t, int n);
int main(void) {
    char dest[] = "ABCDEF";
    char source[] = "GHIJ";

    mystrncat(dest, source, 4);
    printf("%s\n", dest);
    return 0;
}
void mystrncat(char *s, char *t, int n){
     while(*s)
       s++;

     while(n-- && *t) 
       *s = *t, s++, t++;

     *s = '\0';
     return;
}
