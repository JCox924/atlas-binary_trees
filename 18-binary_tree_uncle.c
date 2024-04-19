#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/*
*binary_tree_uncle - find uncle of a node
*
*@node: pointer to node
*
*Return: pointer to uncle node, NULL if none
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}

