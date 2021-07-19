#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer of tree node
 * @value: integer number to be added
 *
 * Return: pointer new node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;
	int swap = 0;

	if (parent == NULL)
	{
		return (NULL);
	}
	temp = parent;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (temp->left != NULL)
	{
		temp = temp->left;
		swap = temp->n;
		temp->n = new_node->n;
		new_node->n = swap;
	}
	temp->left = new_node;
	new_node->parent = temp;

	return (new_node);
}
