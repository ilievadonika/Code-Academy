/*Задача 7. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи*/
#include <stdio.h>
#include<stdlib.h>

int linear_search(const int arr[], int n, int key);
int c = 0;

int main(void) {
    int *arr;
    int i,n,m;
 
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
 
    printf("Enter the elements of the array: ");
    for(i = 0;i <= n-1; i++){
        scanf("%d",(arr + i));
    }
 
    printf("Enter the number to be search: ");
    scanf("%d", &m);
    i = 0;
    i = linear_search(arr, m, n);
     
    if(c == 0)
         printf("The number is not in the list\n");
    else
         printf("The number is found at position %d\n", i + 1);
    return 0;
}

int linear_search(const int arr[], int n, int key) {
    int i;
    for(i = 0;i <= n - 1; i++){
        if(*(arr + i) == key){
             c = 1;
             break;
         }
    }
    return i;
}