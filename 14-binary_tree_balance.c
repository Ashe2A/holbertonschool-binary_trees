#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - get balance of tree
 * @tree: the tree to measure the balance of
 *
 * Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right) + 1);
	return (0);
}
