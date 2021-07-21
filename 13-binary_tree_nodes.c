#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree pointer to be traversed
 *
 * Return: nodes of the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			node = 1;
		}

		return (binary_tree_nodes(tree->left) + node +
				binary_tree_nodes(tree->right));
	}

	return (0);
}
