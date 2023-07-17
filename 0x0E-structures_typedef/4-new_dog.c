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
	dog_t *dog;
	int len1, len2;


	len1 = _strlen(name);
	len2 = _strlen(owner);


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;


	return (dog);
}

