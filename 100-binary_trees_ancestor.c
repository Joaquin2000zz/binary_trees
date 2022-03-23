#include "binary_trees.h"
/**
 * aux - finds the lowest common ancestor of two nodes
 * @first: first node to check
 * @second: second node to check
 * Return: the ancestor. otherwise, returns NULL
 */
binary_tree_t *aux(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *toReturn = NULL;

	if (first->parent && second->parent)
	{
		if (first->parent->n == second->parent->n)
		{
			return ((binary_tree_t *)first->parent);
		}
		else
		{
			if (first->parent && second->parent)
				toReturn = aux(first->parent, second->parent);
			if (!first->parent && second->parent)
				toReturn = aux(first, second->parent);
			if (first->parent && !second->parent)
				toReturn = aux(first->parent, second);
		}
	}
	return (toReturn);
}

/**
 * auxasimetric - finds the lowest common ancestor of two nodes
 * @first: first node to check
 * @second: second node to check
 * Return: 1 if finds an ancestor. otherwise, returns 0
 */
int auxasimetric(const binary_tree_t *first, const binary_tree_t *second)
{
	int flag = 0;

	if (second->parent)
	{
		if (first->n == second->parent->n)
		{
			return (1);
		}
		else
			flag = auxasimetric(first, second->parent);
	}
	return (flag);
}


/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first node to check
 * @second: second node to check
 * Return: pointer to the lowest common ancestor node of the given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int tocheck = 0;
	binary_tree_t *tocheck_t = NULL;

	if (!first || !second)
		return (NULL);
	if (first->parent)
		if (first->parent->n == second->n)
			return ((binary_tree_t *)second);
	if (second->parent)
		if (second->parent->n == first->n)
			return ((binary_tree_t *)first);
	if (second->parent && first->parent)
		if (second->parent->n == first->parent->n)
			return ((binary_tree_t *)first->parent);
	tocheck = auxasimetric(first->parent, second);
	if (tocheck)
		return ((binary_tree_t *)first->parent);
	tocheck = auxasimetric(second->parent, first);
	if (tocheck)
		return ((binary_tree_t *)second->parent);
	tocheck_t = aux(first, second);
	if (tocheck_t)
		return (tocheck_t);

	return (NULL);
}
