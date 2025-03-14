#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - Function that copies a string
 * @dest: destination where the string will be copied
 * @src: source string to be copied
 *
 * Return: a pointer to the destination (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Function that returns the length of a string
 * @s: the string whose length is to be determined
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * new_dog - Creates a new dog and initializes its attributes
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Allocates memory for a new dog structure,
 * copies the name and owner strings, and assigns the age.
 * If any allocation fails, it frees all allocated memory.
 *
 * Return: Pointer to the new dog_t structure, or NULL if allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->name = malloc((len1 + 1) * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
	return (NULL);
	}

	_strcpy(doggy->name, name);

	doggy->age = age;

	doggy->owner = malloc((len2 + 1) * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	_strcpy(doggy->owner, owner);
	return (doggy);
}
