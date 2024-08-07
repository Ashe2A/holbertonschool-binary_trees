#include "binary_trees.h"

/**
 * binary_tree_size - get tree size
 * @tree: the tree to count the nodes in
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if ((tree != NULL))
	{
		if (tree->left != NULL)
			tree_size += binary_tree_size(tree->left) + 1;
		if (tree->right != NULL)
			tree_size += binary_tree_size(tree->right) + 1;
		return (tree_size);
	}
	return (0);
}