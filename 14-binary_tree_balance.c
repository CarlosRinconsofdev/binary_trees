#include "binary_trees.h"
/**
 * binary_tree_balance - function measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height = 0; 
size_t right_height = 0;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}

/**
 * binary_tree_height - function to get the height of a binary tree
 * @tree: node to draw the height of the tree
 * Return: size, 0 or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_size = 0;
size_t right_size = 0;

if (tree == NULL)
return (0);

left_size += 1 + binary_tree_height(tree->left);
right_size += 1 + binary_tree_height(tree->right);
if (left_size > right_size)
return (left_size);
return (right_size);
}
