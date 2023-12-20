#include "binary_trees.h"
/**
 *
 *
 *
 **/
size_t binary_tree_size_recursive(const binary_tree_t *current)
{
	if (current == NULL || current->parent == NULL)
		return (0);
	return (1 + binary_tree_size_recursive(current->parent));
}

/**
 *
 *
 *
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree));
}
