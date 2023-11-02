#include "binary_trees.h"

/**
 * binary_trees_ancestor - binary trees ancestor
 * @first: first
 * @second: second
 * Return: tbinary_tree_t
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *parentTree, *secondParentTree;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	parentTree = first->parent;
	secondParentTree = second->parent;

	if (parentTree == NULL || first == secondParentTree || (!parentTree->parent && secondParentTree))
	{
		return (binary_trees_ancestor(first, secondParentTree));
	}

  if (secondParentTree == NULL || parentTree == second || (!secondParentTree->parent && parentTree))
	{
		return (binary_trees_ancestor(parentTree, second));
	}

	return (binary_trees_ancestor(parentTree, secondParentTree));
}
