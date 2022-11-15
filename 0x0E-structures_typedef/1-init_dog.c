#include "dog.h"

/**
 * init_dog - initializes a 'struct dog' variable
 * @d: memory address of variable
 * @name: name of variable
 * @age: age of variable
 * @owner: owner of variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
