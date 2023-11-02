#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary tree insert left
 * @parent: parent
 * @value: value
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_tree_node = binary_tree_node(parent, value);
	if (new_tree_node == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
  {
		return (NULL);
  }
  new_tree_node->left = parent->left;
	parent->left = new_tree_node;
  parent->left->parent = new_tree_node;

	return (new_tree_node);
}
