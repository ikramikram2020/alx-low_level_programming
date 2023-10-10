#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - create dog in function
 * @d: dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog, NULL if fails
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
