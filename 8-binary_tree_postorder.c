#include "binary_trees.h"

/**
 * binary_tree_postorder - through a binary tree using post-order traversal
 * @tree: tree pointer to be traversed
 * @func: pointer function to print node value
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
