#include "tree.h"

treeNode *insert(int data) {
    treeNode *temp = (treeNode*)malloc(sizeof(treeNode));
    treeNode *current = NULL;
    treeNode *parent = NULL;

    temp->data = data;
    temp->left = temp->right = NULL;

    if(NULL == root) {
        root = temp;
    } else {
        current = root;
        while (1) {
            parent = current;
            if(data < parent->data) {
                current = current->left;
                if(current == NULL) {
                    parent->left = temp;
                    return temp;
                }
            } else {
                current = current->right;
                if(current == NULL) {
                    parent->right = temp;
                    return temp;
                }
            }
        }
    }
}

void preorder(treeNode *n) {
    if(n) {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}