#include "binary_trees.h"
/**
 *binary_tree_balance - Measures the balance factor of a binary tree
 *
 *@tree: A pointer
 *
 *Return: dwadwdw
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_balance(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_balance(tree->right);

	return (left_height - right_height);
}
