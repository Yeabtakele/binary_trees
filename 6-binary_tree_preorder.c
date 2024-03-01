#include "binary_trees.h"
/**
 * binary_tree_preorder - listing a tree in pre-order
 * @tree: the tree to list
 * @func: function to call each time
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right)
	{
		binary_tree_preorder(tree->right, func);
	}
}
