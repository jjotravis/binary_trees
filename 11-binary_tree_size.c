#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to root node
 * Return: size of tree or ) if NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree != NULL)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}
	return (s);
}
