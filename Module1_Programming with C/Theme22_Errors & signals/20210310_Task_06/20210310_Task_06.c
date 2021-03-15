/*Задача 6*.
Използвайте time(0), за да принтирате всяка секунда.
Използвайте alarm(1), за да подадете сигнал за настъпила
секунда signal (SIGALRM,..).
Използвайте setjmp(Env) в main.c, за да определите мястото от
където да излезете.
Използвайте longjmp(Env, 1), за да джъмпнете на това място,
след като е настъпила 8-мата минута.
Функцията void alarm_me(int d) дефинирайте като инлайн в .h, а
я и използвайте в main.c .*/

/* main.c : */
#include "alarm.h"
extern i;
extern j;
/**/
int main(){
    signal(SIGALRM, alarm_me);
    alarm(1);
    if (setjmp(Envv) != 0) {
        printf("Gave up: j = %d, i = %d\n", j, i);
        exit(1);
    }

    T0 = time(0);
    for (j = 0; j < 10000; j++) {
    for (i = 0; i < 1000000; i++);
}
}

void alarm_me(int d) {
    long t1;
    t1 = time(0) - T0;
    printf("%d second%s has passed: j = %d. i = %d\n", t1, (t1 == 1) ? "" : "s", j, i);
    if (t1 >= 8) {
        printf("Giving up\n");
        longjmp(Env, 1);
    }

    alarm(1);
    signal(SIGALRM, alarm_me);
}