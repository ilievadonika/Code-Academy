/*Упражнение 7.12. Вложени switch конструкции*/

#include <stdio.h>

int main (void) {
    char szBuf[10] = "za";
    printf("Codes %s -> ", szBuf);
    switch(szBuf[0]) {
        case 'x' :
            printf("No\n" );
            break;
        case 'y' :
        case 'z' :
            switch(szBuf[1]) {
                case 'a': printf(" Yes, "); break;
                case 'x': printf(" No, "); break;
                default: break;
            }
            printf("Maybe\n" );
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