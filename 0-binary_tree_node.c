#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_t - creates a binary tree node
 * @parent: parent of the new node
 * @value: value to inpue in the node
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node != NULL)
    {
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->n = value;
        if (parent->left == NULL)
            parent->left = new_node;
        else if (parent->right == NULL)
            parent->right = new_node;
        else
        {
            free(new_node);
            return (NULL);
        }
        return (new_node);
    }
    free(new_node);
    return (NULL);
}