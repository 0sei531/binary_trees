#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * is_complete_recursive - Recursively checks if a binary tree is complete
 * @tree: A pointer to the root node of the tree to check
 * @index: The index of the current node (starts at 0)
 * @count: The number of nodes in the tree
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int is_complete_recursive(const binary_tree_t *tree, size_t index, size_t count)
{
	if (tree == NULL)
		return (1);

	if (index >= count)
		return (0);

	return (is_complete_recursive(tree->left, 2 * index + 1, count) &&
		is_complete_recursive(tree->right, 2 * index + 2, count));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, index = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);

	return (is_complete_recursive(tree, index, size));
}

