#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count nodes.
 *
 * Return: Number of nodes with 1 or 2 children.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Check if the current node has at least one child */
	size_t count = (tree->left != NULL || tree->right != NULL) ? 1 : 0;

	/* Recursively count nodes in the left and right subtrees */
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}

