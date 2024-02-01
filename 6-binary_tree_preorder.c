#include "binary_trees.h"
/**
 *binary_tree_preorder - a function
 *@tree : a pointer
 *@(*func)(int) : value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	(*func)(tree->n);
	binary_tree_preorder(tree->left, &print_num);
	binary_tree_preorder(tree->right, &print_num);
}
