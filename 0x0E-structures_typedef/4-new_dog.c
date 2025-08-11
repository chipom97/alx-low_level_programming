#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	size_t name_len = strlen(name) + 1;
	size_t owner_len = strlen(owner) + 1;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name =  malloc(name_len);
	dog->owner = malloc(owner_len);

	if (!dog->name || !dog->owner)
		{
			free(dog->name);
			free(dog->owner);
			free(dog);
			return (NULL);
		}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
