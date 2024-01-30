#include "binary_trees.h"
/**
 *binary_tree_node - we missed you betty
 *@parent: pointer to the parent node of the node to create
 *@value: the value to put in the new node
 *Return: the pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;

	return (parent);
}
