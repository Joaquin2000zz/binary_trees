#include "binary_trees.h"
/**
 * Stgreater - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * @value: value
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 */
int Stgreater(binary_tree_t *tree, int value)
{
	if (!tree)
		return (1);
	if (tree->n > value && Stgreater(tree->right, value) && Stgreater(tree->left, value))
		return (1);
	else
		return (0);
}
/**
 * Stlesser - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * @value: value
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 */
int Stlesser(binary_tree_t *tree, int value)
{
	if (!tree)
		return (1);
	if (tree->n < value && Stlesser(tree->right, value) && Stlesser(tree->left, value))
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (Stlesser(tree->left, tree->n) && Stgreater(tree->right, tree->n) && binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right))
		return (1);
	else
		return (0);
}
