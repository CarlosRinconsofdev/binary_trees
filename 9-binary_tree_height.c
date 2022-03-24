#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_size = 0;
size_t right_size = 0;

if (tree == NULL)
return (0);
if (tree->left != NULL || tree->right != NULL)
{
left_size = binary_tree_height(tree->left) + 1;
right_size = binary_tree_height(tree->right) + 1;
}
if (left_size >= right_size)
return (left_size);
else
return (right_size);
}
