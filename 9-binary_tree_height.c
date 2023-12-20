#include "binary_trees.h"
/**
 * binary_tree_height - calculates height of tree
 *
 * @tree: tree to calculate height of
 * Return: On Success: Height of tree
 * On Failure: 0
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = -1;
	size_t rightHeight = -1;

	if (tree == NULL)
		return (0);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	if (tree->left != NULL)
		return (leftHeight + 1);
	if (tree->right != NULL)
		return (rightHeight + 1);
}
