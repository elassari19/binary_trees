#include "binary_trees.h"

/**
 * binary_tree_balance - binary tree balance
 * @tree: tree
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balanceTotal = 0, rightLeaf = 0, leftLeaf = 0;

	if (tree)
	{
		leftLeaf = ((int)binary_tree_height_b(tree->left));
		rightLeaf = ((int)binary_tree_height_b(tree->right));
		balanceTotal = leftLeaf - rightLeaf;
	}
	return (balanceTotal);
}
