#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that traverse a binary tree
 * using the preorder traverse
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node. 
 * The value in the node must be passed as a parameter to this function.
 * Return: if tree or func is NULL, do nothing
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
