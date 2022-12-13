#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left child of other node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	temp->right = NULL;
	temp->parent = parent;
	if (parent->left == NULL)
	{
		temp->left = NULL;
	}
	else
	{
		temp->left = parent->left;
		temp->left->parent = temp;
	}
	parent->left = temp;

	return (temp);
}
