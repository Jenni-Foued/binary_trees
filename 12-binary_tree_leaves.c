#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: number_leaves >= 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nb_leaves = 0;

	if (!(tree))
		return (nb_leaves);
	nb_leaves += binary_tree_leaves(tree->left);
	nb_leaves += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		nb_leaves++;
	return (nb_leaves);
}
