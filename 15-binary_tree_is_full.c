#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_is_full - is tree full
 * @tree: the tree to measure the balance of
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int perfection = 1;

	if (tree != NULL)
	{
		if (((tree->left == NULL) && (tree->right != NULL))
		|| ((tree->left != NULL) && (tree->right == NULL)))
			return (0);
		if (tree->left != NULL)
			perfection *= binary_tree_is_full(tree->left);
		if (tree->right != NULL)
			perfection *= binary_tree_is_full(tree->right);
		return (perfection);
	}
	return (0);
}
