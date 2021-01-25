#include <stdio.h>

int main(void) {

    int c;
    int countLines = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++countLines;
        }
    }
    printf("%d lines", countLines);
    
    return 0;
}