#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);
/**
 * binary_tree_uncle -  function that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: A pointer to the uncle node If node is NULL
 * return NULL If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
return (NULL);
return (sibling(node->parent));
}

/**
 * sibling - Get sibling of a node to finde uncle
 * @node: To get sibling from uncle
 * Return: sibling of node
 */
binary_tree_t *sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}
