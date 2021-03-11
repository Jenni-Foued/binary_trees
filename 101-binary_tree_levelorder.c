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
 * binary_tree_leveli - a function that perfom a function func
 *  on the tree level i
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @i: current level of the tree
 * @func: a pointer to a function to call for each node
 */

void binary_tree_leveli(const binary_tree_t *tree, size_t i, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (i == 0)
		func(tree->n);
	binary_tree_leveli(tree->left, i - 1, func);
	binary_tree_leveli(tree->right, i - 1, func);
}

/**
 * binary_tree_levelorder -  a function that goes through a binary tree
 *  using level-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i = 0;

	if (!(tree) || !(func))
		return;
	height = binary_tree_height(tree);
	for (; i < height; i++)
		binary_tree_leveli(tree, i, func);
}
