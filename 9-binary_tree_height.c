#include "binary_trees.h"

/**
 * binary_tree_postorder -  function that goes through a binary tree
 * using post-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * The value in the node must be passed as a parameter to this function.
 * Return: if tree or func is NULL, do nothing
 */


size_t binary_tree_height(const binary_tree_t *tree)
{

size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);
    if (left_height >= right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}
