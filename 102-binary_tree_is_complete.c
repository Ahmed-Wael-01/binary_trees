#include "binary_trees.h"
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
/**
 * complete - checks if binary tree is complete
 * @tree: the root of the tree
 * @level: Current level in the tree
 * @height: tree's height
 * Return: 1 if the tree is complete else 0
 */
int complete(const binary_tree_t *tree, size_t level, size_t height)
{
	if (tree == NULL)
		return (0);
	if (level >= height)
		return (0);
	return (complete(tree->left, level + 1, height) &&
		complete(tree->right, level + 1, height));
}
/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: the root of the tree
 * Return: 1 if the tree is complete else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height =  binary_tree_height(tree);
	return (complete(tree, 0, height));
}
