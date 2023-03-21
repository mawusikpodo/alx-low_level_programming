#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to struct to free
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
