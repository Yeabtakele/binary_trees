#include "binary_trees.h"
/**
 * binary_tree_is_leaf - is a node a leaf
 * @node: the node
 * Return: boolean
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	return (1);
}
