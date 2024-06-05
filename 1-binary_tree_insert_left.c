#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as left-child
 * @parent: A pointer to the parent of the left-child
 * @value: the value that will be in the new node
 * Return: If the parent is null returns null else returns
 * 		pointer of a new node
 * Description: if the parent has a left-child the new node
 * 		take its place, and the old-child will be on
 * 		the left of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
