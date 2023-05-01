#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 * Return: sum of element data in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum_list = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_list += temp->n;
		temp = temp->next;
	}

	return (sum_list);
}

