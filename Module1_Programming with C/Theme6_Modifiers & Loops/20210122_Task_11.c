/*Задача 7.11. switch конструкция*/
/* вкъщи въведете символа със scanf */
#include <stdio.h>

int main (void) {
    char chCode;
    printf("Enter a character: ");
    scanf(" %c", &chCode);
    printf("Code %c -> ", chCode); /* извеждаме символа */
    switch(chCode) {
        case 'x' :
            printf("No\n" ); /* x значи Yes, на някакъв измислен от нас език */
            break;
        case 'y' :
        case 'z' :
            printf("Maybe\n" ); /* y и z значат Maybe, */
            break;
        case 'a' :
            printf("Yes\n" );
            break;
        default :
            printf("Unknown\n" );
            break;
    }
    return 0;
}


