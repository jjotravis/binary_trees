#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a tree
 * @tree: pointer to root node
 * Return: 0 if tree is NULL else balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - measures he height of a binary tree
 * @tree: poiner to root node
 * Return: 0 if NULL else heigt of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right = 0, height_left = 0;

	if (tree == NULL)
		return (0);



	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (height_left > height_right ? height_left : height_right);

}
