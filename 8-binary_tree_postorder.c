#include "binary_trees.h"
#include "6-binary_trees_preorder.c"
/*
*binary_tree_postorder - traverses a tree in postorder fashion
*
*@tree: pointer to the root node of the tree
*
*@func: pointer to function to call node's value
*
*Return: void
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}
