#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node on the left
 *
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Description: creates a new binary tree node and insert it on the left
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	if (parent->left == NULL)
	{
		parent->left = node;
		node->left = NULL;
	}

	else
	{
		node->left = parent->left;
		parent->left = node;
	}
	return (node);
}
