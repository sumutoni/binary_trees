#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (0);
	if ((!tree->right && !tree->left) || (tree->left && tree->right))
	{
		full = 1;
		if (!tree->right && !tree->left)
			return (full);
		full = full && binary_tree_is_full(tree->left);
		if (!full)
			return (0);
		full = full && binary_tree_is_full(tree->right);
	}
	return (full);
}
