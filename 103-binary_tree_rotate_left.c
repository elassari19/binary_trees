#include "binary_trees.h"

/**
 * binary_tree_rotate_left - binary tree rotate left
 * @tree: tree
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pointerTree;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}

	pointerTree = tree->right;
	tree->right = pointerTree->left;

	if (pointerTree->left != NULL)
	{
		pointerTree->left->parent = tree;
	}

	pointerTree->left = tree;
	pointerTree->parent = tree->parent;
	tree->parent = pointerTree;

	return (pointerTree);
}
