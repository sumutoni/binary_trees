#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the depth.
 *
 * Return: height of tree, If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth += 1;

	depth += binary_tree_depth(tree->parent);
	return (depth);
}
