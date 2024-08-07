#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_insert_left - creates a binary tree right node
 * @parent: parent of the new node
 * @value: value to input in the node
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if ((new_node == NULL) || (parent == NULL))
	{
		free(new_node);
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
