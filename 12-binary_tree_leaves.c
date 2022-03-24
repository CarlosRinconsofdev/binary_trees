#include "binary_trees.h"
/**
 * binary_tree_leaves
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return 0;
else
{
binary_tree_leaves(tree->left);
binary_tree_leaves(tree->right);
}
return binary_tree_leaves(tree->left) +1; 
return binary_tree_leaves(tree->right) +1;
}