#include "binary_trees.h"
/**
 * is_bst - checks if it's a valid binary search tree
 * @tree: points to the root
 * @low: the value that is lower than my node
 * @high: the value that is bigger than my node
 * Return: if tree is valid is 1 else 0
 */
int is_bst(const binary_tree_t *tree, int low, int high)
{
	if (tree != NULL)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (is_bst(tree->left, low, tree->n - 1) &&
			is_bst(tree->right, tree->n + 1, high));
	}
	return (1);
}
/**
 * binary_tree_is_bst - checks if a binary tree is a valid
 *			binary search tree
 * @tree: A pointer to the root
 * Return: 1 if it's valid else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
