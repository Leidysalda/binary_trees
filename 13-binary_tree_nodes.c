#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * 1 child in a binary tree
 *
 * @tree: tree
 *
 * Return: Always 0(Success)
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodesT = NULL;

	if (tree == NULL)
		return (0);

	nodesT = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (nodesT);
	return (nodesT + 1);
}
