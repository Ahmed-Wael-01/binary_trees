#include "binary_trees.h"

/**
 * helper - measures the height of a tree
 * @tree: the root of the tree
 * Description: measures the height of a binary tree
 * Return: the height
 */

size_t helper(const binary_tree_t *tree)
{
	size_t lefty = 0, righty = 0;

	if (tree == NULL)
		return (0);
	lefty = helper(tree->left);
	righty = helper(tree->right);
	return ((lefty > righty) ? (lefty + 1) : (righty + 1));
}

/**
 * binary_tree_height - measures the height of a tree
 * @tree: the root of the tree
 * Description: measures the height of a binary tree
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (helper(tree) - 1);
}
