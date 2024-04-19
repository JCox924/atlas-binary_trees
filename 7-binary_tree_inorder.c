#include "binary_trees.h"
#include "6-binary_tree_preorder.c"

/*
*binary_tree_inorder - traverses a tree inorder
*
*@tree: pointer to the root node of the tree
*
*@func: pointer to function to call node's value
*
*Return: void
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_preorder(tree->left, func);
	func(tree-n);
	binary_tree_preorder(tree->right, func);
}
