#include "binary_trees.h"

/**
 * is_full - helper to calculate is full the binary tree
 * @root: tree pointer to be traversed
 *
 * Return: true if a full binary tree, otherwise false
 */
bool is_full(const binary_tree_t *root)
{
	if (root == NULL)
		return (true);

	if (root->left == NULL && root->right == NULL)
		return (true);

	if ((root->left) && (root->right))
		return (is_full(root->left) && is_full(root->right));

	return (false);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree pointer to be traversed
 *
 * Return: 1 if full, 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (is_full(tree))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
