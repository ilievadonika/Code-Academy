/*Задача 7.
Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z*/

#include  <stdio.h>
#include  <signal.h>
#include  <stdlib.h>

void handler(int);

int main(void) {
    signal(SIGINT, handler);
    while (!0) sleep(1);

    return 0;
}

void  handler(int sig) {
    char  c;

    signal(sig, SIG_IGN);
    printf("You hit Ctrl-C?\n"
            "Do you really want to quit? [y/n] ");
    c = getchar();
    if (c == 'y' || c == 'Y')
        exit(0);
    else
        signal(SIGINT, handler);
    getchar(); // Get new line character
}