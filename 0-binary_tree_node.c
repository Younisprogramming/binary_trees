#include "binary_trees.h"
/**
 *binary_tree_node - we missed you betty
 *@parent: pointer to the parent node of the node to create
 *@value: the value to put in the new node
 *Return: the pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
		return (NULL);

	result->parent = parent;
	result->left = NULL;
	result->right = NULL;
	result->n = value;
	
	return (result);
}
