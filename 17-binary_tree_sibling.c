#include "binary_trees.h"
/**
 *binary_tree_sibling - Finds the sibling of a node in a binary tree.
 *@node: A pointer to the node to find the sibling.
 *Return: A pointer to the sibling node, or NULL if node is NULL,
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
