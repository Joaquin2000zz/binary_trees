#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *aux;

	if (!node || !node->parent)
		return (NULL);
	aux = node;
	aux = aux->parent;
	if (!aux->parent)
		return (NULL);
	aux = aux->parent;
	if (aux->left->n == aux)
		return (aux->right);
	if (aux->right->n == aux)
		return (aux->left);
	return (NULL);
}
