#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the binary tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree)
		return (0);

	leftHeight = tree_height(tree->left);
	rightHeight = tree_height(tree->right);

	if (leftHeight == rightHeight)
	{
		if (!tree->left || !tree->right)
			return (1);

		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}


/**
 * tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree.
 *
 * If tree is NULL, the function returns 0.
 */
int tree_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree)
		return (0);

	leftHeight = tree_height(tree->left);
	rightHeight = tree_height(tree->right);

	return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}
