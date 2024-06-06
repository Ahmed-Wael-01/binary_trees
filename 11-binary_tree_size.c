#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a tree
 * @tree: root of the tree
 * Description: measures the size of a tree by counting nodes
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}