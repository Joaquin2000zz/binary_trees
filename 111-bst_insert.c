#include "binary_trees.h"
#include <stdio.h>

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: return a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!(*tree))
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}
	else if ((*tree)->n > value)
	{
		(*tree)->left = bst_insert(&(*tree)->left, value);
		return ((*tree)->left);
	}
	else
	{
		(*tree)->right = bst_insert(&(*tree)->right, value);
		return ((*tree)->right);
	}
	*tree = NULL;
	return (*tree);
}
