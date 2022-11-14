#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - defines a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
