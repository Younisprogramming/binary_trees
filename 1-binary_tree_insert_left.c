#include "binary_trees.h"
/**
 *binary_tree_insert_left - a function
 *@parent: a pointer
 *@value: value
 *Return: pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
		return (NULL);

	result->left = NULL;
	result->right = NULL;
	result->n = value;

	if (parent->left != NULL)
	{
		parent->left->parent = result;
		result->left = parent->left;
		parent->left = result;
	}
	else
	{
		parent->left = result;
	}
	result->parent = parent;
	return (result);
}
