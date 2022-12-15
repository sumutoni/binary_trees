#include "binary_trees.h"

/**
 * height - measures height of tree
 * @tree: pointer to root node to measure height from
 *
 * Return: height, 0 if tree is NULL
 */
int height(const binary_tree_t *tree)
{
	int left_ht = 0, right_ht = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_ht += 1;
	if (tree->right)
		right_ht += 1;

	left_ht += height(tree->left);
	right_ht += height(tree->right);

	if (left_ht >= right_ht)
		return (left_ht);
	else
		return (right_ht);
}
/**
 * binary_tree_balance - measures balance factor of tree
 * @tree: pointer to root node to measure balance factor from
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int factor, left_h = 0, right_h = 0;

	if (!tree)
		return (0);
	if (tree->right)
		right_h = 1;
	if (tree->left)
		left_h = 1;
	left_h += height(tree->left);
	right_h += height(tree->right);
	factor = left_h - right_h;
	return (factor);
}
