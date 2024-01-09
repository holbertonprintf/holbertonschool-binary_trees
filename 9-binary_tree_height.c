#include "binary_trees.h"

/**
 * binary_tree_height_recursive - Recursive helper function to measure the height
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, 0 if tree is NULL
 */
static size_t binary_tree_height_recursive(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return 0;
	left_height = binary_tree_height_recursive(tree->left);
	right_height = binary_tree_height_recursive(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Level of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    return (binary_tree_height_recursive(tree) - 1);
}
