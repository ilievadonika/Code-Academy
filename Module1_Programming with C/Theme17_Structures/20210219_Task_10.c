/*Задача 10. Направете два триъгълника с отместване.*/

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct triangle{
    struct point s;
    struct point e;
};

struct point makepoint(int x,int y);
void printPoint(struct point point);
void buildTriangle(int a,int b,struct triangle start, struct triangle end);

int main(void){
    int a;
    int b;
    struct triangle start;
    struct triangle end;

    buildTriangle(a, b, start, end);

    return 0;
}

void buildTriangle(int a,int b,struct triangle start, struct triangle end) {
    printf("Starting X point of the triangle: \n");
    scanf(" %d", &a);
    printf("Starting Y point of the triangle: \n");
    scanf("%d", &b);
    start.s = makepoint(a, b);

    printf("Final X of the triangle: \n");
    scanf("%d", &a);
    printf("Final Y of the triangle: \n");
    scanf("%d", &b);
    end.e = makepoint(a, b);

    for(int i = start.s.x; i <= end.e.x; i++){
        for(int j = start.s.y; j <= i; j++){
            printf("@");
        }

        for(int j = i; j < end.e.x + 1; j++){
            printf("  ");
        }

        for(int j = start.s.y; j <= i; j++){
            printf("@");
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

void printPoint(struct point point) {
    printf("Point x = %d\n",point.x);
    printf("Point y = %d\n",point.y);
}

