#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 *
 * Return: The new left node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_node = NULL;

    if (!parent)
        return (NULL);

    left_node = binary_tree_node(parent, value);
    if (!left_node)
        return (NULL);

    if (parent->left)
    {
        left_node->left = parent->left;
        parent->left->parent = left_node;
    }

    parent->left = left_node;

    return (left_node);
}

