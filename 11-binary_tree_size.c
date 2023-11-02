#include "binary_trees.h"

/**
 * binary_tree_size - binary tree size
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeOfTree = 0, rightLeaf = 0, leftLeaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leftLeaf = binary_tree_size(tree->left);
		rightLeaf = binary_tree_size(tree->right);
		sizeOfTree = rightLeaf + leftLeaf + 1;
	}

	return (sizeOfTree);
}
