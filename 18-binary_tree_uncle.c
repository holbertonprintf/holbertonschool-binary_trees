#include "binary_trees.h"

/**
  * binary_tree_uncle - finds the uncle of a node
  * @node: is a pointer to the node
  *
  * Return: a pointer to the uncle node
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL ||
		    node->parent->parent == NULL)
        return (NULL);

    if (node->parent->parent->right == node->parent)
        return (node->parent->parent->left);

    return (node->parent->parent->right);
}