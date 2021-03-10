#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 *  in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes (not leaves)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nb_nodes = 0;

	if (!(tree))
		return (0);
	nb_nodes += binary_tree_nodes(tree->right);
	nb_nodes += binary_tree_nodes(tree->left);
	if (tree->right || tree->left)
		nb_nodes++;
	return (nb_nodes);
}
