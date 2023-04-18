#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name's dog
 * @age: dog's age
 * @owner: pointer to char owner's dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}

