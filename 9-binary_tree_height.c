#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: the root of the tree
 * Description: measures the height of a binary tree
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefty = 0, righty = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lefty = 1 + binary_tree_height(tree->left);
	if (tree->right)
		righty = 1 + binary_tree_height(tree->right);
	return ((lefty > righty) ? (lefty) : (righty));
}
