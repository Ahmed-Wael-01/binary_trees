#include "binary_trees.h"

/**
 * binary_tree_ancestor - finds common ancestor
 * @first: first node
 * @second: second node
 * Description: finds the lowest common ancestor between two nodes
 * Return: pointer to the common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *fp, *sp;

	if (first == NULL || second == NULL)
		return (NULL);
	for (fp = first; fp; fp = fp->parent)
		for (sp = second; sp; sp = sp->parent)
			if (fp == sp)
				return ((binary_tree_t *)fp);
	return (NULL);
}
