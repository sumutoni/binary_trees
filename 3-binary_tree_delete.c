#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return;
	left = tree->left;
	right = tree->right;
	binary_tree_delete(left);
	free(left);
	binary_tree_delete(right);
	free(right);
}
