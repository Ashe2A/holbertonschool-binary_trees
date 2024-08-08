#include "binary_trees.h"

/**
 * binary_tree_is_full - is tree full
 * @tree: the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if ((tree != NULL)
	&& (((tree->left == NULL) && (tree->right != NULL))
	|| ((tree->left != NULL) && (tree->right == NULL))))
	{
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
	}
	return (0);
}
