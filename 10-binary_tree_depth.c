#include "binary_trees.h"

int get_depth(const binary_tree_t *tree)
{
    int parent_depth = 0;

    if (tree == NULL)
        return 0;

    return (get_depth(tree->parent) + 1);
}
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return (get_depth(tree));
}
