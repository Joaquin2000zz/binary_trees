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
int binary_tree_balance(const binary_tree_t *tree)
{
	if(!tree)
		return (0);
	printf("%ld\n",binary_tree_height(tree->left));
	printf("%ld\n",binary_tree_height(tree->right));
	return ((binary_tree_height(tree->left)) - (binary_tree_height(tree->right)));
}
