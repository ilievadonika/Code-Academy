#include <stdio.h>
#include <stdlib.h>

typedef struct treeStructure tree;

typedef struct treeStructure{
    unsigned int data;
    tree* left;
    tree* right;
}tree;

extern tree* root;

tree* add(int number);
tree *search_rec(tree *t, int n);