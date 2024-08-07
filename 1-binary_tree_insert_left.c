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

	if ((new_node == NULL) || (parent == NULL))
	{
		free(new_node);
		return (NULL);
	}
	new_node->parent = parent;
	new_node->left = parent->left;
	if (parent->left != NULL)
		parent->left->parent[0] = new_node[0];
	new_node->right = NULL;
	new_node->n = value;
	parent->left = new_node;
	return (new_node);
}
