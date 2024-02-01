#include "binary_trees.h"
/**
 *binary_tree_size - a function
 *@tree: a pointer
 *Return: value
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s1, s2;

	if (tree == NULL)
		return (0);
	s1 = binary_tree_size(tree->left);
	s2 = binary_tree_size(tree->right);

	return (s1 + s2 + 1);
}
