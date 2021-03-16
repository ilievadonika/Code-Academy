/*Задача 1*/

#include "stack.h"

node_t *start= NULL;

int main(void){
    int n = 1;
    while (n){
        printf("Enter a digit:\n");
        scanf("%d", &n);
        push(n);
    }

    while(pop(&n))
        printf("%d", n);
        
return 0;
}