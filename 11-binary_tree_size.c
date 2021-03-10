#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size >= 0 (If tree is NULL, the function return 0)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!(tree))
		return (size);
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	size++;
	return (size);
}
