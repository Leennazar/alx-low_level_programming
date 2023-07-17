#include "dog.h"
#include <stddef.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to variable
 * @name: pointer to dog name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
