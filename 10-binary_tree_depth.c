#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth
 * of a binary tree
 * @tree: pointer to the node to be measure the depth
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));
}
