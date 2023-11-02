#include "binary_trees.h"

/**
 * binary_tree_depth - binary tree depth
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  if (tree && tree->parent)
  {
    return (1 + binary_tree_depth(tree->parent));
  }
  else
  {
    return (0);
  }
}
