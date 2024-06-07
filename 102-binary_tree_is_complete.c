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
	h = bheight((binary_tree_t *)tree);
	for (i = 1; i <= h + 1; i++)
		tree_travel((binary_tree_t *)tree, i, func);
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: points to root
 * Return: 1 if it's complete else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int c = 0;
	int l = 0;
	int h = bheight((binary_tree_t *)tree);

	for (l = 1; l <= h; l++)
	{
		if (c && (tree->left || tree->right))
			return (0);
		if ((tree->left && !tree->right) || (!tree->left && tree->right))
			c = 1;
		tree_travel((binary_tree_t *)tree, l, NULL);
	}
	return (1);
}
