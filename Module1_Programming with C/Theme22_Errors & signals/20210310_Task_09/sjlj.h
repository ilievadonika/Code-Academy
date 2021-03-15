/* sjlj.h : */

#include <setjmp.h>
#include <stdio.h>

int sj(char *s, jmp_buf buf) {
    int i = setjmp(buf);
    printf("Setjmp returned -- %d\n", i);
    printf("s = %s\n", s);
    return i;
}

int lj(int i, jmp_buf buf) {
    printf("In lj: i = %d, Calling longjmp\n", i);
    longjmp(buf, i);
}