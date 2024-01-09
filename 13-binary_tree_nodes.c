#include "binary_trees.h"

/**
  * binary_tree_nodes - counts the nodes
  * @tree: is a pointer to the root node
  *
  * Return: Number of nodes, If tree is NULL, the function must return 0
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (count);
}
