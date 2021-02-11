/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.
*/
#include <stdio.h>
#define ARR_SIZE 1000

void reverse(char *arr, int size);

int main(void) {
    char arr[ARR_SIZE];

    printf("Enter a string: ");
    reverse(arr, ARR_SIZE);

    return 0;
}
void reverse(char *arr, int size) {
    char c;
    char *p;
    int i = 0;

    p = arr;

    while((c = getchar()) != '\n') {
        arr[i] = c;
        i++;
        p++;
    }

    printf("The reversed string is: ");
    
    while(i > 0) {
        --p;
        putchar(*p);
        i--;
    }

    return;
}