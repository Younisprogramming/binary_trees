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

	if (result == NULL)
		return (NULL);

	if (!parent)
		return (NULL);

	result->parent = parent;
	result->left = parent->left;
	result->right = NULL;
	result->n = value;

	if (parent->left != NULL)
	{
		parent->left->parent = result;
	}
	parent->left = result;
	return (result);
}
