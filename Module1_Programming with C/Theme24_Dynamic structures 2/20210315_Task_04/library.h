#include <stdlib.h>
#include <stdio.h>

typedef struct treeStructure tree;

typedef struct treeStructure{
    unsigned int data;
    tree* left;
    tree* right;
}tree;

extern tree* root;

tree* add(int number);
void orderTree(tree* t);
tree* minValueNode(tree* node);
tree* deleteNode(tree* root,int key);