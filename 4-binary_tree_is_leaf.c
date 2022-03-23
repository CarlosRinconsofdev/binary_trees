#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Write a function that checks if a node is a leaf
 * @node: Is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0, If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (1);
if (node->left == NULL && node->right == NULL)
return (1);
else
return (0);
}
