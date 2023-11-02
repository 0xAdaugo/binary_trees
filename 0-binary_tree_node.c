#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 *
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * This function creates a new binary tree node with the given value
 * and sets its parent, left and right pointers to NULL.
 *
 * Return: If memory allocation fails, returns NULL, else returns
 * a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for a new binary tree node*/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));


	/*Check if memory allocation was successful*/
	if (new_node == NULL)
		return (NULL);

	/*initialize the new node with the provided value and parent*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/*Return a pointer to the newly created node*/
	return (new_node);
}
