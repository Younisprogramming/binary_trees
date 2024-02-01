#include "binary_trees.h"
/**
 *binary_tree_preorder - a function
 *@tree: a pointer
 *Return: 0 or num...
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height : right_height);



}
