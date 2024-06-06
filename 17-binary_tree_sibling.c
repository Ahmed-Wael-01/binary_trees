#include "binary_trees.h"

/**
 * binary_tree_sibling - finds it's lost brother :D
 * @node: node to find its brother
 * Description: finds the sibling of the current node
 * Return: sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
			|| !node->parent->left || !node->parent->right)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
