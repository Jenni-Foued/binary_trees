#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts
 * a node as the right-child of another node
 *
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL
 *  on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent)
	{
		node = malloc(sizeof(binary_tree_t));
		if (node == NULL)
			return (NULL);
		node->parent = parent;
		node->left = NULL;
		node->n = value;
		if (parent->right)
		{
			parent->right->parent = node;
			node->right = parent->right;
		}
		else
			node->right = NULL;
		parent->right = node;
		return (node);
	}
	return (NULL);
}
