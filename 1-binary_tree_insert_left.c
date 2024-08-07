#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_insert_left - creates a binary tree left node
 * @parent: parent of the new node
 * @value: value to input in the node
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *old_node = malloc(sizeof(binary_tree_t));

	if ((new_node == NULL) || (parent == NULL))
	{
		free(new_node);
		free(old_node);
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left != NULL)
	{
		old_node = parent->left;
		new_node->left = old_node;
		old_node->parent = new_node;
	}
	parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}
