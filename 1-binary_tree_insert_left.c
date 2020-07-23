#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 *
 * @parent: node parent
 * @value: value node
 *
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		tmp = parent->left;
		tmp->parent = node;
		parent->left = node;
		node->left = tmp;
	}
	return (node);
}
