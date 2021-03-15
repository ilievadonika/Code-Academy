/*Задача 5.
Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)*/

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void sleep(int);
void ctrlc_handler(int iUnused) {
    printf("\nSignal: %d\n", iUnused);
    exit(EXIT_FAILURE);
}
int main() {
    signal(SIGINT, ctrlc_handler);
    signal(SIGTERM, ctrlc_handler);
    while (!0) sleep(1);

    return 0;
}