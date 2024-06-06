#include "binary_trees.h"

/**
 * bheight - measures the height of a tree
 * @tree: the root of the tree
 * Description: measures the height of a binary tree
 * Return: the height
 */

int bheight(const binary_tree_t *tree)
{
	int lefty = 0, righty = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lefty = 1 + bheight(tree->left);
	if (tree->right)
		righty = 1 + bheight(tree->right);
	return ((lefty > righty) ? (lefty) : (righty));
}

/**
 * tree_travel - traverse level nodes
 * @root: root node
 * @level: level height
 * @func: function to call on every node
 * Description: traverse to every node on the same level
 */

void tree_travel(binary_tree_t *root, int level, void (*func)(int))
{
	if (!root)
		return;
	if (level == 1)
		func(root->n);
	else if (level > 1)
	{
		tree_travel(root->left, level - 1, func);
		tree_travel(root->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - traverse by level-order
 * @tree: root node of the tree
 * @func: function to call on every node
 * Description: using the level order traversal method
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h;
	int i;

	if (!tree || !func)
		return;
	h = bheight((binary_tree_t)tree);
	for (i = 1; i <= h; i++)
		tree_travel(tree, i, func);
}
