#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_delete - deletes the entire tree
 * @tree: the tree to delete
 */
void *binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	free(tree->left);
	free(tree->right);
	free(tree->parent);
	free(tree);
}
