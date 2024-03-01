#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    size_t size = 1;
    binary_tree_t **stack = NULL;
    size_t top = 0;

    binary_tree_t *current = tree;
    while (current || top)
    {
        while (current)
        {
            if (stack)
                stack[top++] = current;
            current = current->left;
            size++;
        }

        if (top)
        {
            current = stack[--top];
            current = current->right;
        }
    }

    return size;
}
