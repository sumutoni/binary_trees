#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as right child of other node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	temp = malloc(sizeof(binary_tree_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}

	temp->n = value;
	temp->left = NULL;
	temp->parent = parent;
	if (parent->right == NULL)
	{
		temp->right = NULL;
	}
	else
	{
		temp->right = parent->right;
		temp->right->parent = temp;
	}
	parent->right = temp;

	return (temp);
}
