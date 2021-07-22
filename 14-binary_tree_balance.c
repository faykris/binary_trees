#include "binary_trees.h"

/**
 * height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of the tree, 0 otherwise.
 */
size_t height(const binary_tree_t *tree)
{
	size_t height_left, height_rigth;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + height(tree->left);
	else
		height_left = 1;

	if (tree->right)
		height_rigth = 1 + height(tree->right);
	else
		height_rigth = 1;

	if (height_left > height_rigth)
		return (height_left);
	else
		return (height_rigth);

	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL, otherwise the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance_factor;

	if (tree == NULL)
		return (0);

	balance_factor = height(tree->left) - height(tree->right);
	return (balance_factor);
}
