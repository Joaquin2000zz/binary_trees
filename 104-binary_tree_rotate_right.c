#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: the tree to rotate
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *aux;

	if (!tree || !tree->left)
		return (NULL);
	aux = tree;
	if (!tree->right)
		aux->right = NULL;
	tree = tree->left;
	if (tree->right)
		aux->left = tree->right;
	else
		aux->left = NULL;
	tree->right = aux;
	aux->parent = tree;
	tree->parent = NULL;
	return (tree);
}
