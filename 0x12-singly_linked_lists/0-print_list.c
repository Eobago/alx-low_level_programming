#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h:pointer to the list_t list.
 *
 * Return:  the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t more = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		more++;
		h = h->next;
	}

	return (more);
}
