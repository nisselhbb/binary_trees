#include "binary_trees.h"
/**
 * binary_tree_node - a pointer function that creates
 * a binary tree
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * When created, a node does not have any child
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
