#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts nodes with at least 1 child of a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 *
 * Return: # nodes with at least 1 child, If tree is NULL, your function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		nodes += 1;

	if (tree->left)
		nodes += binary_tree_nodes(tree->left);
	if (tree->right)
		nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
