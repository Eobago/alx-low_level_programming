#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	int p = 0, q = 0, r;
	dog_t *bingo;

	while (name[p] != '\0')
		p++;
	while (owner[q] != '\0')
		q++;
	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->name = malloc(p * sizeof(bingo->name));
	if (bingo->name == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (r = 0; r <= p; r++)
		bingo->name[r] = name[r];
	bingo->age = age;
	bingo->owner = malloc(q * sizeof(bingo->owner));
	if (bingo->owner == NULL)
	{
		free(bingo->owner);
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (r = 0; r <= q; r++)
		bingo->owner[r] = owner[r];
	return (bingo);
}
