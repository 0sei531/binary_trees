#include "binary_trees.h"

/**
 * find_max - Finds the maximum node in a tree.
 * @tree: The pointer to the root of the tree.
 * Return: The node with the maximum value.
 */
heap_t *find_max(heap_t *tree)
{
    if (!tree)
        return (NULL);

    while (tree->right)
        tree = tree->right;

    return (tree);
}

/**
 * remove_node - Removes the specified node from the tree.
 * @node: The node to remove.
 */
void remove_node(heap_t *node)
{
    if (node->parent)
    {
        if (node->parent->left == node)
            node->parent->left = NULL;
        else
            node->parent->right = NULL;
    }
    free(node);
}

/**
 * heap_extract - Extracts the root from a Binary Heap.
 * @root: The pointer to the root of the tree.
 * Return: The value of the extracted node.
 */
int heap_extract(heap_t **root)
{
    if (!root || !*root)
        return (0);

    heap_t *max_node = find_max(*root);
    int value = max_node->n;

    if (max_node == *root)
    {
        free(max_node);
        *root = NULL;
        return (value);
    }

    max_node->n = (*root)->n;
    if ((*root)->left)
        (*root)->n = heap_extract(&(*root)->left);
    else
        (*root)->n = heap_extract(&(*root)->right);

    return (value);
}

