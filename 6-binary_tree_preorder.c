#include "binary_trees.h"

/**
 * binary_tree_preorder - traversing a tree out-order
 * @tree: the tree to traverse
 * @func: function to call at each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
