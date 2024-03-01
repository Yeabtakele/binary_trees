#include "binary_trees.h"
/**
 * binary_tree_sibling - sibling
 * @node: the node
 * Return:the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
