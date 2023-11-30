#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of
 * a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the size
 * Return: if the tree is NULL, return 0
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
