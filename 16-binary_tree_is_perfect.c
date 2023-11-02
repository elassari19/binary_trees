#include "binary_trees.h"

/**
 * binary_tree_is_perfect - binary tree is perfect
 * @tree: tree
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int binaryResult = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		binaryResult = binary_tree_is_full(tree);
		if (binaryResult != 0)
		{
			return (1);
		}
		return (0);
	}
}
