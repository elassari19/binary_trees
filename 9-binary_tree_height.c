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

	if (tree)
	{
		if (tree->left)
			{
				leftNode = 1 + binary_tree_height(tree->left);
			}
			else
			{
				leftNode = 0;
			}
		if (tree->right)
			{
				rightNode = 1 + binary_tree_height(tree->right);
			}
			else
			{
				rightNode = 0;
			}
	}

	if (leftNode > rightNode)
	{
		return (leftNode);
	}

	return (rightNode);
}
