#include "binary_trees.h"
/**
 * binary_tree_nodes - counting nodes with at least 1 child
 * @tree: the counted tree
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (0);
	return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
