#include <stdlib.h>

#include "binary_trees.h"

/**
 * create_node - Create a new AVL node
 * @value: Value to store in the node
 * @parent: Parent node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
static avl_t *create_node(int value, avl_t *parent)
{
	avl_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

/**
 * build_avl - Build an AVL tree recursively from a sorted sub-array
 * @array: Pointer to the first array element
 * @start: Start index (inclusive)
 * @end: End index (exclusive)
 * @parent: Parent node
 *
 * Return: Pointer to subtree root, or NULL on failure
 */
static avl_t *build_avl(int *array, size_t start, size_t end, avl_t *parent)
{
	size_t mid;
	avl_t *root;

	if (start >= end)
		return (NULL);

	mid = start + (end - start) / 2;
	root = create_node(array[mid], parent);
	if (root == NULL)
		return (NULL);

	root->left = build_avl(array, start, mid, root);
	root->right = build_avl(array, mid + 1, end, root);

	return (root);
}

/**
 * sorted_array_to_avl - Build an AVL tree from a sorted integer array
 * @array: Pointer to first array element
 * @size: Number of elements in array
 *
 * Return: Pointer to root node of created tree, or NULL on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);

	return (build_avl(array, 0, size, NULL));
}
