#include "binary_trees.h"

/**
 * binary_tree_preorder - binary tree preorder
 * @tree: tree
 * @func: func
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
	else
	{
		return;
	}
}
