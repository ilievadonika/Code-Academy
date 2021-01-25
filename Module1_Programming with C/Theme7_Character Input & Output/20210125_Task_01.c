#include <stdio.h>

int main(void) {

    int c;
    int count = 0;

    c = getchar();
    while(c != EOF) {
        c = getchar();
        count++;
    }
    printf("%d", count);
    return 0;
}