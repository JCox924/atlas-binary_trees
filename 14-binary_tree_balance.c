#include "binary_trees.h"
#include "9-binary_tree_height.c"

/*
*binary_tree_balance - Measures the balance factor of a tree
*
*@tree: pointer to root node
*
*Return: balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	size_t height_left, height_right;

	if (tree == NULL)
	{
		return (0);
	}
	height_left = tree->left ? binary_tree_height(tree->left) : 0;
	height_right = tree->right ? bianry_tree_height(tree->right) : 0;

	balance = (int)height_left - (int)height_right;

	return (balance);
}
