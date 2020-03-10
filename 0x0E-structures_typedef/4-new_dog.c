#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Will initialize a variable.
 * @name: variable.
 * @age:  Variable.
 * @owner:variable.
 * new_dog - Is part of the prototype
 * Return:  new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}

/**
 * _strdup - Is the prototype.
 * @str: Is tha variable.
 * Return: 0
 */

char *_strdup(char *str)
{
	int p;
	int h;
	char *r;

	if (str == NULL)
	{
		return (NULL);
	}

	for (p = 0; str[p]; p++)
	{
	}

	p++;

	r = malloc(sizeof(char) * p);

	if (r == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < p; h++)
	{
		r[h] = str[h];
	}
	return (r);
}
