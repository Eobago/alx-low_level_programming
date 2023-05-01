#include "lists.h"

/**
 * listint_len - prints all the elements of a linked list
 * @h: pointer to the 1st node of the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}

	return (num_node);
}

