#include "binary_trees.h"

/**
 * binary_tree_is_full - checks fullness
 * @tree: root node of the tree
 * Description: checks if the binary tree is full or not
 * Return: 1 if full 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lefty = 0, righty = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		lefty = binary_tree_is_full(tree->left);
	if (tree->right)
		righty = binary_tree_is_full(tree->right);
	return (lefty & righty);
}
