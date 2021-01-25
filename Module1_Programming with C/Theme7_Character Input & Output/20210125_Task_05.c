#include <stdio.h>

int main(void) {
    char c; 

    while ((c = getchar()) != EOF) {
        if(c >= 'a' && c <= 'z') {
            putchar(c);
        } else if (c >= 'A' && c <= 'Z') {
            putchar(c);
        } 
    }
   
    return 0;
}