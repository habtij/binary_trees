#include "binary_trees.h"

/**
 * binaryPtree_insert_left - Inserts a node as a left-child of another
 * @parent: A Pointer to the node to insert left-child node
 * @value: The value to store in the new node
 *
 * Return: NULL, if parent is NULL or there is an error.
 * Otherwise, a pointer to the new node
 * Description: If parent has left-child already, the new node takes its
 * place and the old left-child is set as the left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
{
return (NULL);
}

new = binary_tree_ndoe(parent, value);
if (new == NULL)
{
return (NULL);
}

if (parent->left != NULL)
{
new-left = parent->left;
parent->left->parent = new;
}
parent->left = new;

return (new);
}
