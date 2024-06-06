#include "binary_trees.h"

/**
 * binary_tree_preorder - travers by pre_order
 * @tree: pointer to the root node
 * @func: pointer to a function to call on every node
 * Description: traverse to every single node using pre-order method
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
