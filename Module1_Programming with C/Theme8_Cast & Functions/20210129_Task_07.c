/*Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.
*/
#include <stdio.h>

int triangleArea(int a, int b);
int quadrilateralArea(int s);

int main(void){
    int a = 0;
    int b = 0;
    printf("Input a: ");
    scanf(" %d", &a);
    printf("Input b: ");
    scanf(" %d", &b);
    printf("S triangle = %d\n", triangleArea(a, b));
    printf("S quadrilateral = %d", quadrilateralArea(triangleArea(a, b)));

    return 0;
}
int quadrilateralArea(int s){
    int area = s * 2;
    return area;
}

int triangleArea(int a, int b){
    int area = (a * b) / 2;
    return area;
}
