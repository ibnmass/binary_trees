#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 *                                       as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node,
 *                                 or NULL on failure or if parent is NULL.
 *
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *parent_left;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	parent_left = parent->left;

	if (parent_left)
	{
		new_node->left = parent_left;
		parent_left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
