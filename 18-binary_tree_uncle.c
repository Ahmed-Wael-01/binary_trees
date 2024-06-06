#include "binary_trees.h"

/**
 * binary_tree_uncle - finds its lost uncle :D
 * @node: node to find its brother
 * Description: finds the uncle of the current node
 * Return: uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
			|| !node->parent->parent->left
			|| !node->parent->parent->right)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
