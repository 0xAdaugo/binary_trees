#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
 * print_binary_tree - Prints the binry tree in a readable format
 *
 * @tree: Pointer to the root node of the tree to print.
 * @offset: Printinf offset
 * @depth: Depth of the target node
 *
 * Return: length of printed tree after processing
 */

static void print_tree(const binary_tree_t *tree, int offset, int depth)
{
	if (!tree)
		return;

	printf("(%03d)", tree->n);

	if (tree->left || tree->right)
	{
		print_tree(tree->left, offset - 5, depth + 1);
		print_tree(tree->right, offset + 5, depth + 1);
	}
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (!tree)
		return;

	print_tree(tree, 0, 0);
	printf("\n");
}

