#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the created node or NULL if the function fails
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	node->n = value;

	return (node);
}
