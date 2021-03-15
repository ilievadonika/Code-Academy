/* alarm.h */
#include <signal.h>
#include <setjmp.h>
#include <unistd.h>

int i = 0; int j = 0; long T0 = 0; /* globals */
jmp_buf Env;
void alarm_me(int d);