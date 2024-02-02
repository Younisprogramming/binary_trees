#include "binary_trees.h"
/**
 *binary_tree_node_height - cawdwad
 *@node: sdwdwd
 *@h: dawdwd
 *Return: Heightdwad
 */

int binary_tree_node_height(const binary_tree_t *node, int h)
{
	int lefth, righth;

	if (node == NULL)
		return (h);

	lefth = binary_tree_node_height(node->left, h + 1);
	righth = binary_tree_node_height(node->right, h + 1);

	return (lefth > righth ? lefth : righth);
}
/**
 *binary_tree_balance - Measures the balance factor
 *@tree: A podawdwadwa
 *Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0, lefth = 0, righth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lefth = binary_tree_node_height(tree->left, 0);

	if (tree->right)
		righth = binary_tree_node_height(tree->right, 0);

	balance_factor = lefth - righth;

	return (balance_factor);
}
