#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *temp, *newnode = NULL;
    newnode = (binary_tree_t*)malloc(sizeof(binary_tree_t));
    if (newnode==NULL)
        return NULL;
    if (parent->right!=NULL)
    {
        temp = parent->right;
        newnode->right = temp;
        temp->parent = newnode;
    }
    else
        newnode->right = NULL;
    parent->right = newnode;
    newnode->parent = parent;
    newnode->n = value;
    newnode->left = NULL;
    
    return newnode;
}
