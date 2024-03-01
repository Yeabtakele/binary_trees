#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a right node
 * @parent: the parent node
 * @value: int value
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild = malloc(sizeof(binary_tree_t));

	if (!parent || !rightChild)
	{
		free(rightChild);
		return (NULL);
	}
	if (parent->right)
	{
		parent->right->parent = rightChild;
		rightChild->right = parent->right;
	}
	parent->right = rightChild;
	rightChild->parent = parent;
	rightChild->n = value;
	return (rightChild);
}
