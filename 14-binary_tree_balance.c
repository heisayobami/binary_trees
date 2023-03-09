#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int height_left, height_right;
	
    if (tree==NULL)
        return 0;
	
    if (tree->left)
        height_left = (int)binary_tree_height(tree->left);
    else
        height_left = -1;

    if (tree->right)
        height_right = (int)binary_tree_height(tree->right);
    else
        height_right = -1;
	
    return (height_left-height_right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left = 0, height_right = 0;
    
    if (tree==NULL)
        return 0;
    
    if (tree->left)
        height_left = 1 + binary_tree_height(tree->left);
    if (tree->right)
        height_right = 1 + binary_tree_height(tree->right);
    
    if (height_left > height_right)
        return height_left;
    else
        return height_right;
}
