/*Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choose(void);
void game(int numbers, int max);

int main(int argc, char **argv){
    void(*g)(int, int) = game;
    int(*c)(void) = choose;

    switch (c()){
    case 1:
        g(5, 35);
        break;
    case 2:
        g(6, 42);
        break;
    case 3:
        g(6, 49);
        break;

    default:
        break;
    }
}

int choose(void) {
    int ans = 1;
    printf("Please choose on option\n");
    printf("For 5/35 press 1.\nFor 6/42 press 2.\nFor 6/49 press 3.\n");
    scanf("%d", &ans);
    return ans;
}

void game(int numbers, int max) {
    srand(time(0));
    int res[numbers];

    for (int i = 0; i < numbers; i++) {   
        res[i] = rand() % (max + 1);
    }
    printf("And the winning numbers are\n");
    for (int i = 0; i < numbers; i++) {
        printf("%d\n", res[i]);
    }
}