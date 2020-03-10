#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Will initialize a variable.
 * name - variable.
 * age -  Variable.
 * owner - variable.
 * @d: Variable.
 * Return - 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}