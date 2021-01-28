/*Задача 7.8. Създайте безкраен цикъл с for (;;) и принтирайте числото,
което на всеки цикъл се увеличава с едно. Когато числото стигне 48,
излезте от цикъла с break.
*/
#include <stdio.h>
#include <unistd.h>

int main(void) {
    unsigned n = 0;
    for (;;) {
        sleep(1);
        printf("tick %d\n", ++ n);
        n %= 60;
        if(n == 48)
            break;
    }
    return 0;
}