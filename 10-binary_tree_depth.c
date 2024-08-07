#include "binary_trees.h"

/**
 * binary_tree_depth - get a node's depth in a tree
 * @tree: the tree to measure down
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (binary_tree_is_root(tree) == 0)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
