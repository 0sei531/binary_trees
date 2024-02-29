#include "binary_trees.h"

/**
 * array_to_avl - Converts an array of integers into an AVL tree.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 *
 * Return: Pointer to the root node of the constructed AVL tree.
 */
avl_t *array_to_avl(int *array, size_t size)
{
    avl_t *root = NULL;
    size_t i;

    if (array == NULL || size == 0)
        return (NULL);

    for (i = 0; i < size; i++)
    {
        root = avl_insert(&root, array[i]);
        if (root == NULL)
        {
            /* Error handling if insertion fails */
            return (NULL);
        }
    }

    return (root);
}

