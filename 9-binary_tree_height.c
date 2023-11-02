#include "binary_trees.h"

/**
 * binary_tree_height - binary tree height
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftNode = 0;
	size_t rightNode = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			leftNode = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rightNode = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((leftNode > rightNode) ? leftNode : rightNode);
	}
}
