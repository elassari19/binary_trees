#include "binary_trees.h"

/**
 * binary_tree_delete - binary tree delete free
 * @tree: tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
  if (tree != NULL)
  {
    binary_tree_delete(tree->right);
    binary_tree_delete(tree->left);
  }

  free(tree);
}
