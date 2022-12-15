#include "binary_trees.h"

/**
 * sibling - returns sibling of node
 * @node: node to find sibling for
 *
 * Return: pointer to sibling
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node->parent || !node)
		return (NULL);
	if (node != node->parent->left)
		return (node->parent->left);
	return (node->parent->right);
}
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a function that finds the uncle of a node
 *
 * Return: a pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (sibling(node->parent));
}
