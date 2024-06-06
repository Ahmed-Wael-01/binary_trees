#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is leaf?
 * @node: node to check
 * Description: checks if a node is leaf or not
 *
 * Return: 1 if leaf 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
