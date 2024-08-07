#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_nodes - get number of nodes that aren't leaves
 * @tree: the tree to count the nodes of
 *
 * Return: number of nodes that aren't leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
