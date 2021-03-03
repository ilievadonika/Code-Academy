/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.
*/

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point start;
    struct point end;
};

struct point makepoint(int x,int y);
void fillArea(struct rect sc);

int main(void) {
    struct rect screen;

    screen.start = makepoint(0,0);
    screen.end = makepoint(15,15);

    fillArea(screen);

    return 0;
}

void fillArea(struct rect sc) {
    for(int i = sc.start.x; i < sc.end.x; i++){
        for(int j = sc.start.y; j < sc.end.y; j++){
            printf("-");
        }
        printf("\n");
    }
    return;
}

struct point makepoint(int x,int y) {

    struct point p;
    p.x = x;
    p.y = y;

    return p;
}