#include "binary_trees.h"

/**
 * array_to_heap - Builds a Max Binary Heap tree from an array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * Return: Pointer to the root node of the Max Binary Heap tree.
 */
heap_t *array_to_heap(int *array, size_t size)
{
    if (array == NULL || size == 0)
        return NULL;

    heap_t *tree = NULL;
    size_t i;

    /* Insert all elements into the heap */
    for (i = 0; i < size; i++)
    {
        heap_insert(&tree, array[i]);
    }

    return tree;
}

