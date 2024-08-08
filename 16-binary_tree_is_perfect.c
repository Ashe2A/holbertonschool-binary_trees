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
	if (tree != NULL && (binary_tree_balance(tree) == 0))
	{
		return (binary_tree_is_full(tree));
	}
	return (0);
}
