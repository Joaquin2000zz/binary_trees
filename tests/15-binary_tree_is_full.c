#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree to traverse
 * Return: 1 if the tree it's complete. otherwise, returns 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int k = 1;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		k *= binary_tree_is_full(tree->left);
		k *= binary_tree_is_full(tree->right);
		return (k);
	}
	if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
