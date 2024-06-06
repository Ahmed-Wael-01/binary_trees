#include "binary_trees.h"

/**
 * bheight - measures the height of a tree
 * @tree: the root of the tree
 * Description: measures the height of a binary tree
 * Return: the height
 */

int bheight(const binary_tree_t *tree)
{
	size_t lefty = 0, righty = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lefty = 1 + bheight(tree->left);
	if (tree->right)
		righty = 1 + bheight(tree->right);
	return ((lefty > righty) ? (lefty) : (righty));
}

/**
 * binary_tree_balance - calculate balance factor
 * @tree: root node of the tree
 * Description: measures the balance factor of a binary tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lifty = 0, righty = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lifty = 1 + bheight(tree->left);
	if (tree->right)
		righty = 1 + bheight(tree->right);
	return (lifty - righty);
}
