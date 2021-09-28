#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		length = i + 1;
	return (length);
}

/**
 * new_dog - creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: Null or user
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *my_dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(len1 * sizeof(my_dog->name));
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		my_dog->name[i] = name[i];
	my_dog->age = age;
	my_dog->owner = malloc(len2 * sizeof(my_dog->owner));
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i <= len2; i++)
		my_dog->owner[i] = owner[i];
	return (my_dog);
}
