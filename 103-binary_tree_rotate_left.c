#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: the tree to rotate
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *aux;

	if (!tree || !tree->right)
		return (NULL);
	aux = tree;
	if (!tree->left)
		aux->left = NULL;
	tree = tree->right;
	if (tree->left)
		aux->right = tree->left;
	else
		aux->right = NULL;
	tree->left = aux;
	aux->parent = tree;
	tree->parent = NULL;
	return (tree);
}
