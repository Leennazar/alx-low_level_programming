#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
  * new_dog - function that creates a new dog.
  * @name: new name pointer
  * @age: new dogs age
  * @owner: new owner pointer
  * Return: A pointer to the new dog, or NULL if the function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
        if (new_dog == NULL)
                return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
