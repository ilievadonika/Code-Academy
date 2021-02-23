/*Задача 10.
Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.*/
#include <stdio.h>
#include <stdbool.h>

int findSimpleNums(int *p, int count);
void printArray(int *p, int size);
bool isPrime(int *p, int input, int count);

int main(int argc, char **argv){
    int arr[168] = {0}; 
    int counter = 1000;
    int size = sizeof(arr)/sizeof(arr[0]);
    int input = 0;

    int *p = &arr;
    int(*fsn)(int *, int) = findSimpleNums;
    void(*pa)(int *, int) = printArray;
    bool(*isp)(int *, int, int) = isPrime;

    fsn(p, counter);
    pa(p, size);

    printf("\n\nEnter a number to check if its prime: ");
    scanf("%d", &input);
    if(isp(p, input, counter)){
        printf("\nYour number is PRIME! :)");
    } else {
        printf("\nSorry, your number is NOT PRIME!");
    }

    return 0;
}

bool isPrime(int *p, int input, int count) {
    for(int i = 0; i <= count; i++){
        if(p[i] == input) {
            return true;
        }
    }
    return false;
}

void printArray(int *p, int size) {
    printf("The prime numbers in 1000 are: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *p);
        *p++;
    }
    return;
}

int findSimpleNums(int *p, int count){
    int i = 0;
    int j = 0;
    int index = 0;

    for(i = 2; i < count; i++){
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            } 
        }
        if (j == i) {
            p[index] = i;
            index++;
        }
        
    }
    return *p;
}