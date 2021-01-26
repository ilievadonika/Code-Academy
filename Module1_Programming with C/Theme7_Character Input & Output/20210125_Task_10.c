/*Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.
*/
#include <stdio.h>

#define MAXLINE 1000

int geline(char s[], int lim);
void reverse(char line[],  int length);

int main() {    
    char s[MAXLINE];
    int len;

    while ((len = geline(s, MAXLINE)) > 1) {
        if (len > 1) {
            reverse(s, len);
            printf("%s", s);
        }
    }
    return 0;
}

void reverse (char input[], int length) {
    char temp;
    int j = length-1;
    for (int i = 0; i < j; ++i, --j) {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

int geline(char s[], int lim) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) 
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}