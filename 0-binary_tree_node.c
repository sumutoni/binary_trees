#include "binary_trees.h"

/**
 * create_node - creates node
 * @node: node to create
 * @value: value of node
 */
void create_node(binary_tree_t *node, int value)
{
	node->n = value;
	node->left = NULL;
	node->right = NULL;
}
/**
 * binary_tree_node - function to create a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *current, *prt;

	temp = malloc(sizeof(binary_tree_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	if (parent == NULL)
	{
		create_node(temp, value);
		temp->parent = NULL;
		return (temp);
	}
	current = parent;
	prt = parent;
	while (current->n < value)
	{
		prt = current;
		current = current->left;
		if (current == NULL)
		{
			create_node(temp, value);
			temp->parent = prt;
			return (temp);
		}
	}
	while (current->n > value)
	{
		prt = current;
		current = current->right;
		if (current == NULL)
		{
			create_node(temp, value);
			temp->parent = prt;
			return (temp);
		}
	}
	return (NULL);
}
