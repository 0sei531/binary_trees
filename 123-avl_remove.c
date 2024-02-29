#include "binary_trees.h"

/**
 * avl_remove - Removes a node from an AVL tree.
 * @root: Pointer to the root node of the AVL tree.
 * @value: Value to remove from the AVL tree.
 * Return: Pointer to the root node of the AVL tree after removal.
 */
avl_t *avl_remove(avl_t *root, int value)
{
    if (root == NULL)
        return (NULL);

    if (value < root->n)
        root->left = avl_remove(root->left, value);
    else if (value > root->n)
        root->right = avl_remove(root->right, value);
    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return (NULL);
        }
        else if (root->left == NULL) {
            avl_t *temp = root->right;
            free(root);
            return (temp);
        }
        else if (root->right == NULL) {
            avl_t *temp = root->left;
            free(root);
            return (temp);
        }
        else {
            avl_t *temp = root->right;
            while (temp->left != NULL)
                temp = temp->left;
            root->n = temp->n;
            root->right = avl_remove(root->right, temp->n);
        }
  }

    return (root);
}

