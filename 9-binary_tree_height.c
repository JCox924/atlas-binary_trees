#include "binary_trees.h"

/*
*binary_tree_height - measrues height of tree
*
*@tree: pointer to tree
*
*Return: height of tree, 0 if NULL
*/



binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (h_left > h_right ? h_left : h_right) + 1;
}


