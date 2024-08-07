#include "binary_trees.h"

/**
 * binary_tree_inorder - traversing a tree in-order
 * @tree: the tree to traverse
 * @func: function to call at each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		func(tree->n);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
