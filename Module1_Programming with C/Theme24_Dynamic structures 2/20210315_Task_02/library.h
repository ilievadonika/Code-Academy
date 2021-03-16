#include <stdio.h>
#include <stdlib.h>

typedef struct treeStructure tree;

typedef struct treeStructure{
    unsigned int data;
    tree* left;
    tree* right;
}tree;

tree* root;

void insertKey(int x,tree **T);
void orderTree(tree* t);