#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return NULL;
	
    if (node->parent->left && node->parent->right)
    {
        if (node->parent->left == node)
            return node->parent->right;
        else
            return node->parent->left;
    }
	
    return NULL;
}
