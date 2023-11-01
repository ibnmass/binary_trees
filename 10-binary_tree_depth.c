#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node in the binary tree.
 *
 * If tree is NULL, the function returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;
	size_t current_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (current_node->parent != NULL)
	{
		current_depth += 1;
		current_node = current_node->parent;
	}

	return (current_depth);
}
