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
 *binary_tree_is_perfect - Cwdawdwdw
 *@tree: A pointadwda
 *Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lefth, righth;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lefth = binary_tree_node_height(tree->left, 0);
	righth = binary_tree_node_height(tree->right, 0);
	if (lefth == righth &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
	{
		return (1);
	}
	return (0);
}
