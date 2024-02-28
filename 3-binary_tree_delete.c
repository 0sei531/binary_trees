#include "binary_trees.h"

/**
 * binary_tree_delete_recursive - Recursively deletes nodes of a binary tree.
 * @node: Pointer to the current node.
 * Return: Nothing.
 **/

void binary_tree_delete_recursive(binary_tree_t *node)
{
	if (node)
	{
		binary_tree_delete_recursive(node->left);
        	binary_tree_delete_recursive(node->right);
        	free(node);
	}
}

void binary_tree_delete(binary_tree_t *tree)
{
	 if (!tree)
	 {
		fprintf(stderr, "Error: Cannot delete NULL tree\n");
        	return;
	 }
	 binary_tree_delete_recursive(tree);
}
