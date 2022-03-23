#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node to check the sibling
 * Return: the sibling node. otherwise, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int toCheck = 0;
	binary_tree_t *aux;

	if (!node || !node->parent)
		return (NULL);
	aux = node->parent;
	if (aux->left)
		if (aux->left == node)
			if (aux->right)
				return (aux->right);
			else
				return (NULL);
		else
			return (aux->left);
	else
		return (NULL);
}
