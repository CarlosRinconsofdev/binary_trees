#include "binary_trees.h"
/**
 * binary_tree_t - Function that creates a binary tree node
 * @parent: ptr to the parent node
 * @value:  int value to put in the new node
 * Return: A pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (value == '\0')
return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}
