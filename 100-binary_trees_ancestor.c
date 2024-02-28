#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ptr1 = first, *ptr2 = second;

    if (first == NULL || second == NULL)
        return (NULL);

    while (ptr1 != ptr2)
    {
        ptr1 = (ptr1 == NULL) ? second : ptr1->parent;
        ptr2 = (ptr2 == NULL) ? first : ptr2->parent;
    }

    return ((binary_tree_t *)ptr1);
}

