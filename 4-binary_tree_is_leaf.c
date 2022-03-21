#include "binary_trees.h"


/**
 * binary_tree_is_leaf function that deletes an entire binary tree
 * @node: nodo to check if is a leaf
 * Return: NULL if nos is leaf otherwise return 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	return (0);
}
