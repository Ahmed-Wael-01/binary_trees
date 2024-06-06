#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth
 * @tree: node to measure its depth
 * Description: measures and return the depth level of a node
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
