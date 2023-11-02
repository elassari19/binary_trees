#include "binary_trees.h"

/**
 * binary_tree_nodes - binary tree nodes
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  parentNode = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		parentNode += ((tree->left || tree->right) ? 1 : 0);
		parentNode += binary_tree_nodes(tree->left);
		parentNode += binary_tree_nodes(tree->right);
		return (parentNode);
	}
}
