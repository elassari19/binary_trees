#include "binary_trees.h"

/**
 * binary_tree_is_full - binary tree_is full
 * @tree: tree
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftLeaf = 0, rightLeaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left && tree->right)
	{
		leftLeaf = binary_tree_is_full(tree->left);
		rightLeaf = binary_tree_is_full(tree->right);
		if (leftLeaf == 0 || rightLeaf == 0)
		{
			return (0);
		}
		return (1);
	}
	
	if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (0);
}
