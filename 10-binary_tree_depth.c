#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a node
 *  in a binary tree
 *
 * @tree:  a pointer to the node to measure the depth
 *
 * Return: depth >= 0 (if tree is NULL return 0)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!(tree) || !(tree->parent))
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
