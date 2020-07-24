#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in
 * a binary tree
 *
 * @tree: tree
 *
 * Return: Always 0(Success)
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t prof = NULL;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	prof = binary_tree_depth(tree->parent) + 1;

	return (prof);
}
