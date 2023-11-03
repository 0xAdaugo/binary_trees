#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if a node is a root of a binary tree.
 * @node:pointer to the node to check.
 *
 * This function determines whether the given node is 
 * the root of the binary tree. A root node is one that has no parent.
 *
 * Return: 1 if the node is a root, 0 if not.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*check if the node is NULL or has a parent*/
	if (node == NULL || node->parent != NULL)
		return (0);

	/*the node is a root if it is not NULL and has no parent*/
	return (1);
}
