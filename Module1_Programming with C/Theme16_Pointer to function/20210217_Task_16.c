/* We have 2 sorted arrays A and B with 88 elements each.
Form an array C with 2x88 elements formed by mixing A and B, so that C contains 
the elements of A and B, but it is arranged and we do not have to sort it again. */

#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main(){
    int a[88];
    int b[88]; 
    int c[176]; 
    int limitA = 88; 
    int limitB = 88;
    int limitC = 176; 
    int i, j, temp;
    int aNum = 1;
    int bNum = 2;

    time_t t;
    srand((unsigned int)(time(&t))); 

    for(i=0; i<limitA; i++)
        a[i] = rand() % limitA;
        
    for(i=0; i<limitB; i++)
        b[i] = rand() % limitB;
        
    printf("\nElements of Array A are:\n");
    for(i=0; i<limitA; i++)
    {
        if(i==(limitA-1))
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }

    printf("\n\nElements of Array B are:\n");
    for(i = 0; i < limitB; i++) {
        if(i == (limitB-1))
            printf("%d", b[i]);
        else
            printf("%d, ", b[i]);
    }
    
    for(i =0; i < limitA; i++) {
        c[i] = a[i];
    }
    for(j = 0; j < limitB; j++) {
        c[i] = b[j];
        i++;
    }
    limitC = i;
    // sorting the merged array
    for(j = 0; j < (limitC-1); j++){
        for(i = 0; i < (limitC-1); i++){
            if(c[i] > c[i+1]){
                temp = c[i];
                c[i] = c[i+1];
                c[i+1] = temp;
            }
        }
    }
    printf("\n\nElements of Array C are:\n");
    for(i = 0; i < limitC; i++){
        if(i == (limitC-1))
            printf("%d", c[i]);
        else
            printf("%d, ", c[i]);
    }
    
    return 0;
}