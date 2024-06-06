#include "binary_trees.h"

/**
 * tree_height - measures the height of a tree
 * @tree: the root of the tree
 * Description: measures the height of a binary tree
 * Return: the height
 */

int tree_height(const binary_tree_t *tree)
{
	int lefty = 0, righty = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lefty = 1 + tree_height(tree->left);
	if (tree->right)
		righty = 1 + tree_height(tree->right);
	return ((lefty > righty) ? (lefty) : (righty));
}

/**
 * tree_size - measures the size of a tree
 * @tree: root of the tree
 * Description: measures the size of a tree by counting nodes
 * Return: size of the tree
 */

int tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + tree_size(tree->right) + tree_size(tree->left));
}

/**
 * binary_tree_is_perfect - checks perfection
 * @tree: root node of the tree
 * Description: checks if the binary tree is PERFECT or not
 * Return: 1 if perect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i, h, m = 0;

	if (tree == NULL)
		return (0);
	h = tree_height(tree);
	for (i = 0; i < h + 1; i++)
		m *= 2;
	m--;
	i = tree_size(tree);
	if (i == m)
		return (1);
	return (0);
}
