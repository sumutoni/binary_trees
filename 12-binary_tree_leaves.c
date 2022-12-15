#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts leaves of a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves.
 *
 * Return: # of leaves of tree, If tree is NULL, your function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
	{
		leaves += 1;
		return (leaves);
	}

	if (tree->left)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
