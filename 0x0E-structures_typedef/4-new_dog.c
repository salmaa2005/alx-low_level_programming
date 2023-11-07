#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* _strlen - measures the length of a string
* @str: a string
*
* Return: returns a pointer
*/
int _strlen(const char *str)
{
	int length = 0;

	while (str[length])
		length++;
	return (length);
}

/**
* _strcpy - copies a string
* @src: a string
* @dest: a string
*
* Return: returns an array of chars
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - creates a new dog
* @name: a string
* @age: a float
* @owner: a string
*
* Return: returns a pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if both name and owner are empty & teh age < 0 return Null*/
	if (age < 0 || !name || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
