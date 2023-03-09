#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * @height: height of the the tree
 * @leaf_nodes: total number of leaf nodes on the tree
 *
 * Return: 1 if the tree is perfect
 *         0 if the tree is not perfect
 *         0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int height, leaf_nodes;
	
    if (tree==NULL)
        return 0;
	
    height = (int)binary_tree_height(tree);
    leaf_nodes = (int)binary_tree_leaves(tree);
	
    return (pow(2, height)==leaf_nodes);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 *
 * Return: number of leaves
 *         0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t count = 0;
	
    if (tree==NULL)
        return 0;
    
    if (tree->left==NULL && tree->right==NULL)
        return ++count;
    
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
