#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree
 *
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		count_right = 1 + binary_tree_height(tree->right);

	if (count_left > count_right)
		return (count_left);
	return (count_right);

	return (0);
}

/**
 * _pow - function that return pow
 *
 * @h: height
 *
 * Return: Always 0(Success)
 **/

int _pow(int h)
{
	int i, result = 1;

	for (i = 0; i < h; i++)
		result = 2 * result;

	return (result);
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: tree
 *
 * Return: Always 0(Success)
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavesT = NULL;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leavesT = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);

	return (leavesT);
}

/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect
 * binary tree
 *
 * @tree: tree
 *
 * Return: Always 0(Success)
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leavesT = binary_tree_leaves(tree);
	int heightT = binary_tree_height(tree);
	int perfectT = _pow(heightT);

	if (tree == NULL)
		return (0);

	if (leavesT == perfectT)
		return (1);
	return (0);
}
