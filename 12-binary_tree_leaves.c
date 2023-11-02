#include "binary_trees.h"

/**
 * binary_tree_leaves - binary tree leaves
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafSize = 0, leftLeaf = 0, rightLeaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leftLeaf = binary_tree_leaves(tree->left);
		rightLeaf = binary_tree_leaves(tree->right);
		leafSize = leftLeaf + rightLeaf;

		return ((!leftLeaf && !rightLeaf) ? leafSize + 1 : leafSize + 0);
	}
}
