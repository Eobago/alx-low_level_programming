#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t list_counter = 0;
	size_t line_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		list_counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		line_n = 0;
		while (line_n < list_counter)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (list_counter);
			}
			l_n = l_n->next;
			line_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
