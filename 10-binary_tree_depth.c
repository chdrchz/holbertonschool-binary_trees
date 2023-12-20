#include "binary_trees.h"
/**
 * binary_tree_depth - finds depth of tree
 *
 * @tree: tree to find depth of
 * Return: On Success: Depth of tree
 * On Failure: 0
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t leftDepth = 0;
	size_t rightDepth = 0;
	
	if (tree == NULL)
		return (0);
	leftDepth = binary_tree_depth(tree->letf);
	rightDepth = binary_tree_depth(tree->right);
	return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
}
