/*Задача 9. Направете функця add(), която събира две точки.*/

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct point makepoint(int x,int y);
struct point addpoint(struct point p1, struct point p2);
void printPoint(struct point point);

int main(void) {
    int a;
    int b;
    struct point point1;
    struct point point2;
    struct point res;

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

    res = addpoint(point1, point2);
    printf("The result of adding point1 to point2 is:\n");
    printPoint(res);

    return 0;
}

struct point addpoint(struct point p1, struct point p2){
    struct point sum;
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;

    return sum;
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