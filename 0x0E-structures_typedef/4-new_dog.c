#include "dog.h"
#include <stdlib.h>


/**
 * _strcpy -  string copy
 * @end: the copy place
 * @start: the source
 *
 * Return: pointer to place
 */
char *_strcpy(char *end, char *start)
{
	int j;

	for (j = 0; start[j]; j++)
		end[j] = start[j];
	end[j] = '\0';

	return (end);
}

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
*/
int _strlen(char *str)
{
	int j;

	for (j = 0; str[j]; j++)
		;

	return (j);
}

/**
 * new_dog - creates a dog infos
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner of dog
 *
 * Return: pointer to the new infos of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
