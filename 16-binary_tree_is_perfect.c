#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect
 *
 * @tree: tree
 *
 * Return: Always 0(Success)
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0, level = 0;

	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (d == level + 1)
			return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
		return (0);
	return (0);
}
