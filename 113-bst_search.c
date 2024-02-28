#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree (BST)
 * @tree: A pointer to the root node of the BST
 * @value: The value to search for
 *
 * Return: A pointer to the node containing the value, or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
    /* If the tree is empty or the value is found at the root, return */
    if (tree == NULL || tree->n == value)
        return (bst_t *)tree;

    /* If the value is less than the current node's value, search left subtree */
    if (value < tree->n)
        return bst_search(tree->left, value);
    /* If the value is greater than the current node's value, search right subtree */
    else
        return bst_search(tree->right, value);
}

