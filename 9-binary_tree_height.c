#include "binary_trees.h"

/**
 * binary_tree_height - get a tree's height
 * @tree: the tree to measure up
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			left_height += binary_tree_height(tree->left) + 1;
		if (tree->right != NULL)
			right_height += binary_tree_height(tree->right) + 1;
		if (right_height > left_height)
			return (right_height);
		return (left_height);
	}

	return (0);
}
