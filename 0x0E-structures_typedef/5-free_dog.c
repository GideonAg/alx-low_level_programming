#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory of dog_t type
 * @d: memory address of a dog_t variable
 */

void free_dog(dog_t *d)
{
	free(d);
}
