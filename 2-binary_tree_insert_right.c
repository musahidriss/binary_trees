#include "binary_trees.h"

/**
* binary_tree_insert_right - a function that inserts a node as a right child
* @parent: is a pointer to the parent
* @value: the value to put in the new node
* Return: a pointer to the new node or NULL on failure or if the parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node_right;

if (parent == NULL)
return (NULL);

node_right = binary_tree_node(parent, value);
if (node_right == NULL)
return (NULL);
if (parent->right)
{
parent->right->parent = node_right;
node_right->right = parent->right;
}
parent->right = node_right;
return (node_right);
}
