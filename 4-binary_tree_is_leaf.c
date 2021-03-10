#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 *
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0 (including node is NULL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!(node->left) && !(node->right))
			return (1);
	}
	return (0);
}
