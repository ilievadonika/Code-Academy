/*Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.*/
#include <stdio.h>

void bubbleSort(int m[], int lim)
{
    int *s = m;
    int i, j;
    int a = *s, b = *(s + 1);
    for (i = 0; i < lim - 1; i++)
    {
        for (j = 0; j < lim - 1; j++)
        {

            if (a > b)
            {
                int temp = *s;
                *s = *(s + 1);
                *(s + 1) = temp;
                s++;
                a = *s;
                b = *(s + 1);
            }
            else
            {
                s++;
                a = *s;
                b = *(s + 1);
            }
        }
        s = &m[0];
    }
    for (int i = 0; i < lim; i++)
    {
        printf("%d ", *s);
        s++;
    }
}

int main(void)
{
    int a[100], n, c;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &a[c]);

    bubbleSort(a, n);

    return 0;
}