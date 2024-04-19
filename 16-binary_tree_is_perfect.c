#include "binary_trees.h"
#include "9-binary_tree_height.c"

/*
*biuanry_tree_is_perfect - checks if tree if perfect
*
*@tree: pointer to root of tree
*
*Return: 1 if perfect, 0 if not or NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right = NULL)
		{
			return (1);
		}
		if (tree->left != NULL && tree->right != NULL)
		{
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
		}
	}
	return (0);
}

