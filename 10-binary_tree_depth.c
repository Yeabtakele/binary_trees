#include "binary_trees.h"
/**
 * binary_tree_depth - depth of binary tree
 * @tree: the measured tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
