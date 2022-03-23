#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: the tree to traverse
 * Return: the height or null if !tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left += binary_tree_height(tree->left) + 1;
	if (tree->right)
		right += binary_tree_height(tree->right) + 1;
	if (left >= right)
		return (left);
	else
		return (right);
}
/**
 * binary_tree_balance - function that measures the height of a binary tree
 * @tree: the tree to traverse
 * Return: the height or null if !tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t altura_izq, altura_der;

	if (!tree)
		return (0);
	if (tree->left)
		altura_izq = binary_tree_height(tree->left) + 1;
	else
		altura_izq = binary_tree_height(tree->left);
	if (tree->right)
	{
		altura_der = binary_tree_height(tree->right) + 1;
	}
	else
	{
		altura_der = binary_tree_height(tree->right);
	}
	return (altura_izq - altura_der);
}
