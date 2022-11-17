#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
  *new_dog-creates a new dog struct
  *@name: the name
  *@age: the age
  *@owner: the owner
  *Return: NULL if it fails / a new struct if succesful
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy;

	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	copy->name = name;
	copy->age = age;
	copy->owner = owner;
	return (copy);
}
