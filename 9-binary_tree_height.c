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
			left_height += binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			right_height += binary_tree_postorder(tree->right, func);
		if (right_height > left_height)
			return (right_height + 1);
		return (left_height + 1);
	}

	return (0);
}
