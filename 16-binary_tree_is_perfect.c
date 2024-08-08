#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - is tree perfect
 * @tree: the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfection = 1;
	int right_perfection = 1;

	if ((tree != NULL) && (binary_tree_balance(tree) == 0) && (binary_tree_is_full(tree->left) == 1))
	{
		if (tree->left != NULL)
			left_perfection *= binary_tree_is_perfect(tree->left);
		if (tree->right != NULL)
			right_perfection *= binary_tree_is_perfect(tree->right);
		return (left_perfection * right_perfection);
	}
	return (0);
}
