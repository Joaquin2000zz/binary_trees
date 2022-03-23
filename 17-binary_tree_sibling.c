#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node to check the sibling
 * Return: the sibling node. otherwise, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *aux;

	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right && (node->parent->right == node))
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	else if (node->parent->left && (node->parent->left == node))
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	return (NULL);
}
