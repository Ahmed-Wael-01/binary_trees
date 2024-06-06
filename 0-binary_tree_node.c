#include "binary_trees.h"

/**
 * binary_tree_node - creates a node
 *
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Description: creates a new binary tree node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
