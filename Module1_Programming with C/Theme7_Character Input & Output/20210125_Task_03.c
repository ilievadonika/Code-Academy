#include <stdio.h>

int main(void) {
    int c;
    int countSh = 0;
    int countT = 0;
    int countNl = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n') {
            ++countNl;
        } else if (c == '\t') {
            ++countT;
        } else if (c == ' ') {
            ++countSh;
        }
    }

    printf("Number of new lines: %d\n", countNl);
    printf("Number of tabulation: %d\n", countT);
    printf("Number of intervals: %d\n", countSh);
    
    return 0;
}