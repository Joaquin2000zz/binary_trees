#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree to traverse
 * Return: 1 if the tree it's perfect. otherwise, returns 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int k = 1;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		if ((tree->left->left && tree->left->right) &&
		    (!tree->right->left && !tree->right->right))
			return (0);
		if ((!tree->left->left && !tree->left->right) &&
		    (tree->right->left && tree->right->right))
			return (0);
		k *= binary_tree_is_perfect(tree->left);
		k *= binary_tree_is_perfect(tree->right);
		return (k);
	}
	if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
