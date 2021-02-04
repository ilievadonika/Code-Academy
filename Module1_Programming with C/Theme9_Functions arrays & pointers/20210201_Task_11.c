/*Задача 11. напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]
*/
#include <stdio.h>

void squeeze(char s[], int c);

int main(void) {
    char s[] = "Programming";
    int c = 0;
    printf("You have this string: \"%s\"", s);
    printf("\nInput the charachter you want to remove: ");
    scanf("%c", &c);
    squeeze(s, c);
    printf("New string: %s\n", s);

    return 0;
}
void squeeze(char s[], int c) {
    int i, j;
    for(i = j = 0; s[i] != '\0'; i++)
        if(s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';

    return;    
}