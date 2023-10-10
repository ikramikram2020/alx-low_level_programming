#include "dog.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string.
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer.
 * @src: pointer to the string source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog struct.
 * store a copy of name and owner
 * @name: pointer to string.
 * @owner: pointer to string.
 * @age: float.
 * Return: new created struct new_struct, NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_struct;

	if (!name || !owner || age < 0)
		return (NULL);
	new_struct = malloc(sizeof(dog_t));
	if (!new_struct)
		return (NULL);
	new_struct->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_struct->name)
	{
		free(new_struct);
		return (NULL);
	}
	new_struct->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_struct->owner)
	{
		free(new_struct->name);
		free(new_struct);
		return (NULL);
	}
	_strcpy(new_struct->name, name);
	_strcpy(new_struct->owner, owner);
	new_struct->age = age;
	return (new_struct);
}
