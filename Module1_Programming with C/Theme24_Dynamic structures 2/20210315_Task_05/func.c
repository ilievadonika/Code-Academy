#include "library.h"

tree* add(int number){
    
    tree* temp = (tree*)malloc(sizeof(tree));
    tree* current = NULL;
    tree* parent = NULL;

    temp->data = number;
    temp->right = temp->left = NULL;

    if(root == NULL){
        root = temp;
    }
    else{
        current = root;
        while(1){
            parent = current;
            if(number<parent->data){
                current = current->left;
                if(current == NULL){
                    parent->left = temp;
                    return temp;
                }
            }
            else{
                current = current->right;
                if(current == NULL){
                    parent->right = temp;
                    return temp;
                }
            }
        }
    }
}

tree *search_rec(tree *t, int n){
    
    if(t != NULL)
        if(t->data < n)
            t = search_rec(t->right, n);
        else if(t->data > n)
            t = search_rec(t->left, n);

        return t;
}