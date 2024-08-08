#include "binary_trees.h"

/**
 * binary_tree_sibling - node sibling
 * @node: the tree to check
 *
 * Return: the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node != NULL) && (node->parent != NULL)
	&& (node->parent->left != NULL) && (node->parent->right != NULL))
	{
		if ((node->parent->left) == node)
			return (node->parent->right);
		if ((node->parent->right) == node)
			return (node->parent->left);
	}
	return (NULL);
}
