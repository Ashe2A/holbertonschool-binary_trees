#include "binary_trees.h"

/**
 * binary_tree_leaves - get number of leaves
 * @tree: the tree to count the leaves of
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			leaf_count += binary_tree_leaves(tree->left);
		if (tree->right != NULL)
			leaf_count += binary_tree_leaves(tree->right);
		if (binary_tree_is_leaf(tree) == 1)
			return (leaf_count + 1);
		else
			return (leaf_count);
	}
	return (0);
}
