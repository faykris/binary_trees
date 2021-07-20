#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: tree pointer to be traversed
 *
 * Return: depth of the binary tree node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->parent == NULL)
		{
			return (0);
		}

		return (binary_tree_depth(tree->parent) + 1);
	}

	return (0);
}
