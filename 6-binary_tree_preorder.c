#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: tree pointer to be traversed
 * @func: pointer function to print node value
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp;

	temp = tree;
	if (temp)
	{
		func(temp->n);
		binary_tree_preorder(temp->left, func);
		binary_tree_preorder(temp->right, func);
	}
}
