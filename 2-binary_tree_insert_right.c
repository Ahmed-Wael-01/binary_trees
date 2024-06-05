#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as right-child
 * @parent: A pointer to the parent of the right-child
 * @value: the value that will be in the new node
 * Return: If the parent is null returns null else returns
 *		pointer of a new node
 * Description: if the parent has a right-child the new node
 *		take its place, and the old-child will be on
 *		the left of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
