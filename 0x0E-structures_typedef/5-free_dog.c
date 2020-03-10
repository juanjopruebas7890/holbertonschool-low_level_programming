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
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
