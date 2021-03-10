#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: height >= 0 (if tree is NULL return 0)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!(tree))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *right, *left;

	if (!(tree))
		return (0);
	right = tree->right;
	left = tree->left;
	if (right == NULL && left == NULL)
		return (1);
	if (binary_tree_height(left) == binary_tree_height(right))
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	return (0);
}
