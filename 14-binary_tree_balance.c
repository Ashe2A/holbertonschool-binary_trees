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
	int balance = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			balance += binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			balance -= (binary_tree_height(tree->right) - 1);
		}
		return (balance);
	}
	return (0);
}
