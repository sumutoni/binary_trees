#include "binary_trees.h"

/**
 * binary_tree_sibling -  function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node  || !node->parent || !node->parent->right
		|| !node->parent->left)
		return (NULL);

	if (node->parent->left->n != node->n)
		return (node->parent->left);
	if (node->parent->right->n != node->n)
		return (node->parent->right);
}
