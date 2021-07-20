#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree pointer to be traversed
 *
 * Return: height of the binary tree node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightl = 0, heightr = 0, max = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (0);
		}

		heightl = binary_tree_height(tree->left);
		heightr = binary_tree_height(tree->right);

		if (heightl >= heightr)
		{
			max = heightl;
		}
		else
		{
			max = heightr;
		}
		return (max + 1);
	}

	return (0);
}
