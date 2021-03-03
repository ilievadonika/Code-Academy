/*Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/

#include <stdio.h>
#include <stdlib.h>

struct Tpoint{
    int x;
    int y;
};

struct Tpoint makepoint(int x,int y);
struct Tpoint distance(struct Tpoint x, struct Tpoint y);
void printPoint(struct Tpoint point);

int main(void) {
    int a;
    int b;
    struct Tpoint point1;
    struct Tpoint point2;
    struct Tpoint res;

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

    res = distance(point1, point2);
    printf("The distance between point1 and point2 is: \n");
    printPoint(res);

    return 0;
}

struct Tpoint distance(struct Tpoint p1, struct Tpoint p2){
    struct Tpoint dis;
    if(p1.x > p2.x) {
        dis.x = p1.x - p2.x;
    } else {
        dis.x = p2.x - p1.x;
    }
    
    if(p1.y > p2.y) {
        dis.y = p1.y - p2.y;
    } else {
        dis.y = p2.y - p1.y;
    }
   
    return dis;
}

struct Tpoint makepoint(int x,int y) {

    struct Tpoint p;
    p.x = x;
    p.y = y;

    return p;
}

void printPoint(struct Tpoint p){

    printf("Point x = %d\n",p.x);
    printf("Point y = %d\n",p.y);
}