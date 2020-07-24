#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 *
 * @tree: tree
 *
 * Return: Always 0(Success)
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balanceT = NULL;

	if (tree == NULL)
		return (0);

	balanceT = binary_tree_height(tree->left) -
		binary_tree_height(tree->right);

	return (balanceT);
}

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

        else if (tree->left == NULL && tree->right == NULL)
                return (0);

       count_left = binary_tree_height(tree->left);
        count_right = binary_tree_height(tree->right);

        if (count_left > count_right)
                return (count_left + 1);
        else
                return (count_right + 1);
}
