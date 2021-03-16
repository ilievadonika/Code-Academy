#include "library.h"

void insertKey(int x,tree **T){
    if(*T == NULL){
        *T = (tree*)malloc(sizeof(tree));
        (*T)->data = x;
        (*T)->left = NULL;
        (*T)->right = NULL;
    }
    else if(x < (*T)->data){
        insertKey(x,&(*T)->left);
    }else{
        insertKey(x,&(*T)->right);
    }
}

void orderTree(tree *t){

    if(t){
        printf("Data: %u\n",t->data);
        orderTree(t->left);
        orderTree(t->right);
    }

}