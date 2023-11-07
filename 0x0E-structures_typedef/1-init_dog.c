#include <stdio.h>
#include "dog.h"
/**
* init_dog - initialize a variable of type struct dog
* @d: a pointer to a struct
* @name: a pointer to an array of chars
* @age: a floating point
* @owner: a pointer to an array of chars
*
* Return: returns a void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
