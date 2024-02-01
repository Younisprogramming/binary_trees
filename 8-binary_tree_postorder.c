#include "binary_trees.h"
/**
 *  *binary_tree_postorder - a function
 *   *@tree: a pointer
 *    *@func: value
 *     */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_preorder(tree->right, func);
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
}
