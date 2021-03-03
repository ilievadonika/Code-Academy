/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct point makepoint(int x,int y);
void printPoint(struct point point);

int main(void) {
    int a;
    int b;
    struct point point1;
    struct point point2;

    printf("Enter your first coordinates: \n");
    printf("x1 = ");
    scanf("%d", &a);
    printf("y1 = ");
    scanf("%d", &b);
    point1 = makepoint(a, b);
    
    printf("Enter your second coordinates: \n");
    printf("x2 = ");
    scanf("%d", &a);
    printf("y2 = ");
    scanf("%d", &b);
    point2 = makepoint(a, b);

    printf("\nYour first point coordinates are: \n");
    printPoint(point1);
    printf("Your second point coordinates are: \n");
    printPoint(point2);

    return 0;
}

struct point makepoint(int x,int y) {

    struct point p;
    p.x = x;
    p.y = y;

    return p;
}

void printPoint(struct point p){

    printf("Point x = %d\n",p.x);
    printf("Point y = %d\n",p.y);
}