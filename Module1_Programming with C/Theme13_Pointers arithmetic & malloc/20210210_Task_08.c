/*Задача 8. Разгледайте и имплементирайте quicksort алгоритъма.*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void quickSort( int *a, int, int);
int partition( int *a, int, int);

int main(void) {
    int a[] = {0, 2, 6, 5, 1}; 
    int i;
    int arrlength = 5; 

    printf("\n\nUnsorted array is:  ");
    for(i = 0; i < arrlength; ++i)
        printf(" %d ", a[i]);

        //array, 0, length 
        quickSort( a, 0, arrlength);

        printf("\n\nSorted array is:  ");
        for(i = 0; i < arrlength; ++i)
            printf(" %d ", a[i]);
        printf("\n\n");

    return 0;
}

//array, Leftmost position, Rightmost position
void quickSort(int *a, int L, int R){
    int k;

    if(R <= L){
        return;
    }
    k = partition( a, L, R);

    quickSort( a, L, k); // Sort left half of partitioned array
    quickSort( a, k+1, R);  // Sort right half of partitioned array
}

int partition(int *a, int L, int R) {
    int pivot; 
    int help; 
    int Small; 
    int Big; 
    Small = L; //S = current Leftmost position
    Big = R-1; //B = rightmost position
    pivot = a[R-1]; //rightmost number in array

    while(Big > Small) {//as long as the two pointers don't cross you continue
        if(a[Big-1] > pivot){   //move to the right of the pivot 
          swap(&a[Big], &a[Big-1]); //HERE IS THE CHANGE I MADE!!!!!!!!!!!
          Big--; 
        }
        else {
          swap(&a[Big-1], &a[Small]);// move to left of the pivot 
          Small++; 
        }
    }
        return Big;  //return the position of the pivot
}

void swap(int *a, int *b){
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}