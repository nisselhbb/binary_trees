#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{

	while (1)
	{
		if (tree == NULL)
			break;

		else if (tree != NULL && tree->left != NULL)
		{
			binary_tree_delete(tree->left);
			tree->left = NULL;
		}
		else if (tree != NULL && tree->right != NULL)
		{
			binary_tree_delete(tree->right);
			tree->right = NULL;
		}
		else
		{
			free(tree);
			return;
		}
	}
}
