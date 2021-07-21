#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree pointer to be traversed
 *
 * Return: leaves of the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaf = 1;

		return (binary_tree_leaves(tree->left) + leaf +
				binary_tree_leaves(tree->right));
	}

	return (0);
}
