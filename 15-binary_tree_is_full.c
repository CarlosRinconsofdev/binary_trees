#include "binary_trees.h"
/**
 * int binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Is a pointer to the root node of the tree to check
 * Return: f tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left != NULL && tree->right != NULL)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));
return (0);
}
