#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the depth of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the size.
 *
 * Return: height of tree, If tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size += 1;

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
