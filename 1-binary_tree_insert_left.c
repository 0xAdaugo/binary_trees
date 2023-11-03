#include "binary_trees.h"

/**
 * binary_tree_insert_left - This inserts a node as a left-child
 * of another in a binary tree.
 * @parent: pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * This function inserts a new node with the specified value as the left child
 * of the given parent node.
 * if the parent node already has a left child, the new node takes its place
 * and the old left child becomes the left child of the new node.
 *
 * Return: if the parent is NULL or an error occurs - NULL.
 * Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/*if the parent already has a left child, move it to the new node*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/*set the new node as the left child of the parent*/
	parent->left = new_node;

	/*return a pointer to the newly created node*/
	return (new_node);
