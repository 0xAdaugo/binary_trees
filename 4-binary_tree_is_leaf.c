#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This checks if a node is a leaf of a binary tree.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*Check if the node is NULL or has either a left or right child*/
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	/*The node is a leaf if its not NULL and has no children*/
	return (1);
}
