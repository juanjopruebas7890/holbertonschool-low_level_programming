#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Will initialize a variable.
 * @name: variable.
 * @age: Variable.
 * @owner: variable.
 * @d: Variable.
 * Return - 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
