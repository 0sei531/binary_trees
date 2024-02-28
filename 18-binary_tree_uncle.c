#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: A pointer to the sibling node, or NULL if node, parent, or sibling is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/* Return the sibling node */
	return (node->parent->left == node ? node->parent->right : node->parent->left);
}

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle of.
 *
 * Return: A pointer to the uncle node, or NULL if node does not exist or has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/* Return the uncle of the node */
	return (binary_tree_sibling(node->parent));
}

