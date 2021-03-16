#include "library.h"

tree *add(int number)
{

    tree *temp = (tree *)malloc(sizeof(tree));
    tree *current = NULL;
    tree *parent = NULL;

    temp->data = number;
    temp->right = temp->left = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        current = root;
        while (1)
        {
            parent = current;
            if (number < parent->data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = temp;
                    return temp;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = temp;
                    return temp;
                }
            }
        }
    }
}

void orderTree(tree *t)
{

    if (t)
    {
        printf("Data: %u\n", t->data);
        orderTree(t->left);
        orderTree(t->right);
    }
}

tree* minValueNode(tree* node)
{
    tree* current = node;

    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

tree* deleteNode(tree* root,int key)
{
    
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            tree* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            tree* temp = root->left;
            free(root);
            return temp;
        }
        tree* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
