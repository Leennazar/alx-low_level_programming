#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to variable
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	void *age1;

	age1 = &d->age;

	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (age1 == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);

}
