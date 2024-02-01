#include "binary_trees.h"

/**
 * binary_tree_inorder - traversr binary tree using iorder
 * @tree: pointer to root node
 * @func: pointer to function call on each node
 * Return: void
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, *func);
		func(tree->n);
		binary_tree_inorder(tree->right, *func);
	}
}
