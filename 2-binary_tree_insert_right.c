#include "binary_trees.h"

/**
 * binary_tree_insert_right - This inserts a node as the right-child of
 * another in a binary tree.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * This function inserts a new node with the specified value as
 * the right-child of the given parent node.
 * If the parent already has a right-child, the new node takes its place,
 * and the old right-childe becomes the right-child of the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 * else - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*check if the parent is NULL*/
	if (parent == NULL)
		return (NULL);

	/*create a new binary tree node with the specified value*/
	new_node = binary_tree_node(parent, value);

	/*check if memory allocation for the new node was successful*/
	if (new_node == NULL)
		return (NULL);

	/*check if the parent already has a right child, move it to the new node*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/*set the new node as the right child of the parent*/
	parent->right = new_node;

	return (new_node);
}
