#include "binary_trees.h"

/**
 * binary_tree_is_root - checks root
 * @node: node to check
 * Description: checks if a node is root or not
 *
 * Return: 1 if root 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
