#include "binary_trees.h"

/**
 * avl_insert - Inserts a value into an AVL tree while maintaining balance.
 * @tree: Pointer to a pointer to the root node of the AVL tree.
 * @value: Value to insert into the AVL tree.
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
avl_t *avl_insert(avl_t **tree, int value)
{
    if (*tree == NULL)
    {
        *tree = binary_tree_node(NULL, value);
        if (*tree == NULL)
            return (NULL);
        return (*tree);
    }

    if (value < (*tree)->n)
        (*tree)->left = avl_insert(&((*tree)->left), value);
    else if (value > (*tree)->n)
        (*tree)->right = avl_insert(&((*tree)->right), value);

    return (*tree);
}

