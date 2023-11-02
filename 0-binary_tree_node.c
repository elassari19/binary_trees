#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: root parent node
 * @value: value
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_nodes = NULL;

	new_tree_nodes = malloc(sizeof(binary_tree_t));
	if (new_tree_nodes == NULL)
		return (NULL);

	new_tree_nodes->parent = parent;
	new_tree_nodes->n = value;
	new_tree_nodes->left = NULL;
	new_tree_nodes->right = NULL;

	return (new_tree_nodes);
}
