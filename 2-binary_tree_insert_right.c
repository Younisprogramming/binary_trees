#include "binary_trees.h"
/**
 *binary_tree_insert_right - a function
 *@parent: a pointer
 *@value: value
 *Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (!parent)
		return (NULL);
	result = malloc(sizeof(binary_tree_t));
	if (result == NULL)
		return (NULL);

	result->parent = parent;
	result->left = NULL;
	result->right = parent->right;
	result->n = value;

	if (parent->right != NULL)
	{
		parent->right->parent = result;
	}
	parent->right = result;
	return (result);
}
