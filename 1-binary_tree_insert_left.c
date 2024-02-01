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

	if (!parent)
		return (NULL);

	if (result == NULL)
		return (NULL);

	result->parent = parent;
	result->left = NULL;
	result->right = NULL;
	result->n = value;

	if (parent->left != NULL)
	{
		parent->left->parent = result;
		result->left = parent->left;
		parent->left = result;
		result->left->left = NULL;
		result->left->right = NULL;
		return (result);
	}
	parent->left = result;
	return (result);
}
