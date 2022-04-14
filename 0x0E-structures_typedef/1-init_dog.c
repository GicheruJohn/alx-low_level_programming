#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable a type struct dog
 * @d: struct dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
