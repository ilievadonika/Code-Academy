#include <stdlib.h>
#include <stdio.h>

typedef struct treeNode {
    int data;
    struct treeNode *left;
    struct treeNode *right;
} treeNode;

extern treeNode *root;

treeNode *insert(int data);
void preorder(treeNode *n);