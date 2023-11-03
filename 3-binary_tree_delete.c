#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively deletes a binary tree and its nodes.
 * @tree: pointer to the root node of the tree to delete.
 *
 * This function recursively deletes a binary tree and all of its nodes,
 * starting from the given root node.
 * it frees the memory occupied by each node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*chekcs if the tree is not empty*/
	if (tree != NULL)
	{
		/*Recursively deletes the left subtree*/
		binary_tree_delete(tree->left);

		/*Recursively deletes the right subtree*/
		binary_tree_delete(tree->right);

		/*frees the memory occupied by the current node*/
		free(tree);
	}
}
