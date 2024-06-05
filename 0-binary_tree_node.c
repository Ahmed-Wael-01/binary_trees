#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node that will be created.
 * @value: new node's data
 * Return: If an error occurs return NULL
 *	else return pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
