#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog struct
 * @d: memory address of dog struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->age == NULL)
			d->age = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s", (*d).name, (*d).age, (*d).owner);
	}
}
