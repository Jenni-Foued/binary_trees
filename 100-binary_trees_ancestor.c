#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds
 *  the lowest common ancestor of two nodes
 *
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node
 * of the two given nodes or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *tmp_second;

	if (first == NULL || second == NULL)
		return (NULL);
	tmp_second = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = tmp_second;
		first = first->parent;
	}
	return (NULL);
}
