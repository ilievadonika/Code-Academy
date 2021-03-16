/*Задача 4. Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на*/

#include "library.h"

#define SIZE 11

tree* root = NULL;

int main(void){

    int arr[SIZE] = {6,5,10,3,8,13,1,7,11,14,12};
    int i;
    for(i = 0;i < SIZE;i++){
        add(arr[i]);
    }
    orderTree(root);
    printf("\nDelete 1\n");
    root = deleteNode(root,1);
    orderTree(root);
    printf("\nDelete 7\n");
    root = deleteNode(root,7);
    orderTree(root);
    printf("\nDelete 12\n");
    root = deleteNode(root,12);
    orderTree(root);
    printf("\nDelete 14\n");
    root = deleteNode(root,14);
    orderTree(root);

    return 0;
}