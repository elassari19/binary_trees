#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: root parent node
 * @value: value
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_node;

	new_tree_node = malloc(sizeof(binary_tree_t));
	if (new_tree_node == NULL)
	{
		return (NULL);
	}
	new_tree_node->parent = parent;
	new_tree_node->n = value;
	new_tree_node->left = NULL;
	new_tree_node->right = NULL;

	return (new_tree_node);
}
