#include "binary_trees.h"

/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: a pointer to the node to find the sibling
  *
  * Return: a pointer to the sibling node
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right != node)
		return (node->parent->right);
	else if (node->parent->left != node)
		return (node->parent->left);
	return (NULL);
}
