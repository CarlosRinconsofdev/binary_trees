#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: s a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((binary_tree_is_full(tree) == 1) &&
(binary_tree_balance(tree) == 0))
return (1);
return (0);
}

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 * Return: O if tree NULL or 1
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

/**
 * binary_tree_balance - function measures the balance factor of a binary tree
 * @tree: Pointer to the root node to calculate balance factor
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}

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
