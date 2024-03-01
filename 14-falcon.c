#include "binary_trees.h"
/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: the tree to be balanced
 * Return: number,?
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int left, right;
	if (tree->left && !tree->left->right && !tree->left->left)
		left = 1;
	else
		left = binary_tree_height(tree->left);
	if (tree->right && !tree->right->left && !tree->right->right)
		right = 1;
	else
		right = binary_tree_height(tree->right);
	return (left - right);
}
/**
 * binary_tree_height - measuring the height of th binary tree
 * @tree: the tree to measure
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (!tree->right && !tree->left)
                return (0);
        if (binary_tree_height(tree->right) < binary_tree_height(tree->left))
                return (binary_tree_height(tree->left) + 1);
        else
                return (binary_tree_height(tree->right) + 1);
}
