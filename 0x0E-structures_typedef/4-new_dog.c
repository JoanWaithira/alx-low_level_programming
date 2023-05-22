#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A function that returns the length of a string
 *
 * @ch: The string in question
 * Return: Length of the string
 */
int _strlen(char *ch)
{
	int a = 0;

	while (ch[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * *_strcpy - A function that copies a string
 *
 * @src: The source
 * @dest: The destination
 *
 * Return: the pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int b;

	while (src[length] != '\0')
	{
		length++;
	}
	for (b = 0; b < length; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Return: Pointer showing the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1 = _strlen(name);
	int length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
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

