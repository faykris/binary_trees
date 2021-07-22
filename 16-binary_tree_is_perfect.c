#include "binary_trees.h"

/**
 * depth - helper that calculates the depth of a node in a binary tree
 * @node: tree pointer to be traversed
 *
 * Return: depth of the binary tree node
 */
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - helper to calculate is perfect the binary tree
 * @root: tree pointer to be traversed
 * @d: depth of a binary tree
 * @level: level of node in a binary tree
 *
 * Return: true if a perfect binary tree, otherwise false
 */
bool is_perfect(const binary_tree_t *root, int d, int level)
{
	if (root == NULL)
		return (true);

	if (root->left == NULL && root->right == NULL)
		return (d == level + 1);

	if (root->left == NULL || root->right == NULL)
		return (false);

	return (is_perfect(root->left, d, level + 1) &&
		is_perfect(root->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree pointer to be traversed
 *
 * Return: true if a perfect binary tree, otherwise false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	if (is_perfect(tree, d, 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
