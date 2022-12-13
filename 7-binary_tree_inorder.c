#include "binary_trees.h"

/**
 * traverse - traverse of binary tree
 * @node: left child of root
 * @func: a pointer to a function to call for each node
 */
void traverse(binary_tree_t *node, void (*func)(int))
{
	binary_tree_t *right, *left;

	if (node == NULL)
		return;
	right = node->right;
	left = node->left;
	traverse(left, func);
	func(node->n);
	traverse(right, func);
}
/**
 * binary_tree_inorder - function that goes through a binary tree
 * using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *right, *left;

	if (!tree || !func)
		return;
	right = tree->right;
	left = tree->left;
	traverse(left, func);
	func(tree->n);
	traverse(right, func);
}
