#include "binary_trees.h"

/**
 * binary_tree_uncle - node uncle
 * @node: the tree to check
 *
 * Return: the node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (binary_tree_sibling(node->parent));
}
