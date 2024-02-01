#include "binary_trees.h"
/**
 *binary_tree_depth - a function
 *@tree: a pointer
 *Return: num
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dh = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		dh = 1 + binary_tree_depth(tree->parent);
	return (dh);
}
