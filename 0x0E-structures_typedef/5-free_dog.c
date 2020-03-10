#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Will initialize a variable.
 * @d: Variable
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
