#include "binary_trees.h"
/**
 *binary_tree_insert_left - a function
 *@parent: a pointer
 *@value: value
 *Return: pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result == NULL || parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		result = binary_tree_node(parent, value);
		result->left = parent->left;
		parent->left->parent = result;
		parent->left = result;
		return (result);
	}
	parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
