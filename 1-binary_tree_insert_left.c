#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *newnode = NULL;
	newnode = (binary_tree_t*)malloc(sizeof(binary_tree_t));
	if (newnode==NULL)
		return NULL;
	if (parent->left!=NULL)
	{
		temp = parent->left;
		newnode->left = temp;
		temp->parent = newnode;
	}
	else
		newnode->left = NULL;
	parent->left = newnode;
	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;

	return newnode;
}
