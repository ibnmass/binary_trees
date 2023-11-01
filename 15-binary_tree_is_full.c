#include "binary_trees.h"

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: the binary tree
 *
 * Return:  1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->left && tree->right)
	{
		int tmp1, tmp2;

		tmp1 = binary_tree_is_full(tree->left);
		tmp2 = binary_tree_is_full(tree->right);

		return ((tmp1 & tmp2));
	}

	return (0);
}
