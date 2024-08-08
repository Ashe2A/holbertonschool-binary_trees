#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - node uncle
 * @node: the tree to check
 *
 * Return: the node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node != NULL)
	{
		return (binary_tree_sibling(node->parent));
	}
	return (NULL);
}
