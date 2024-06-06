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
 * tree_balance - calculate balance factor
 * @tree: root node of the tree
 * Description: measures the balance factor of a binary tree
 * Return: balance factor
 */

int tree_balance(const binary_tree_t *tree)
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

/**
 * is_full - checks fullness
 * @tree: root node of the tree
 * Description: checks if the binary tree is full or not
 * Return: 1 if full 0 otherwise
 */

int is_full(const binary_tree_t *tree)
{
	int lefty = 0, righty = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		lefty = is_full(tree->left);
	if (tree->right)
		righty = is_full(tree->right);
	return (lefty & righty);
}

/**
 * binary_tree_is_perfect - checks perfection
 * @tree: root node of the tree
 * Description: checks if the binary tree is PERFECT or not
 * Return: 1 if perect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (is_full(tree) && tree_balance(tree) == 0)
		return (1);
	return (0);
}
