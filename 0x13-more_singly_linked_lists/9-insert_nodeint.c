#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	size_t p = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head && !idx)
	{
		*head = new;
		return (new);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (p < (idx - 1))
	{
		temp = temp->next;
		p++;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
