#include "binary_trees.h"

/**
 * balance - helper to calculate the balance factor
 * @tree: tree pointer to be traversed
 *
 * Return: balance factor
 */
int balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (balance(tree->left) - balance(tree->right) + 1);
	}

	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree pointer to be traversed
 *
 * Return: balance factor minus 1 when tree node exist
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (balance(tree) - 1);
	}

	return (0);
}
