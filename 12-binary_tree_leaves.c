#include "binary_trees.h"
/**
 *binary_tree_leaves - a function
 *@tree: a pointer
 *Return: n
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lea, lea1;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lea = binary_tree_leaves(tree->left);
	lea1 = binary_tree_leaves(tree->right);

	return (lea + lea1);
}
