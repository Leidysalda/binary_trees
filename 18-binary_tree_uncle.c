#include "binary_trees.h"

/**
 * binary_tree_uncle -  function that finds the uncle of a node
 *
 * @node: node
 *
 * Return: Always 0(Success)
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
