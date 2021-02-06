/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.
*/
#include <stdio.h>

int strend(char *s, char *t);
int mystrlen(char *t);

int main(void) {
    char s[] = {"Stop the program"};
    char t[] = {"program"};

    printf("%d", strend(s, t));

    return 0;
}
int strend(char *s, char *t) {
    int len;
    len = mystrlen(t);
    while(*s !='\0')
        ++s;
    --s;

    while(*t!='\0')
        ++t;   
    --t;

    while(len > 0) {
        if(*t == *s) {
            --t;
            --s;
            --len;
        } else
            return 0;
    }
    if(len == 0)
        return 1;
}

int mystrlen(char *t) {
    char *p;
    p = t;

    while(*p !='\0')
        ++p;

    return p - t;
}