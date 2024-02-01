#include "binary_trees.h"

/**
 * binary_tree_is_full - checks ifbinary tree is full
 * @tree: pointer to root node
 * Return: 0 if tree is NULL else 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left)
					&& binary_tree_is_full(tree->right));
	}

	return (0);
}
