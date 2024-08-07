#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_delete - creates a binary tree right node
 * @tree: the tree to delete
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_delete(binary_tree_t *tree)
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
