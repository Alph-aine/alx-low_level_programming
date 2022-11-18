#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 *len- count the len of the argument passed
 *@str: the argument
 *Return: i
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}

/**
 *_strcpy- copies the content of src to dest
*@dest: the destination
*@src: the source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
  *new_dog-creates a new dog struct
  *@name: the name
  *@age: the age
  *@owner: the owner
  *Return: NULL if it fails / a new struct if succesful
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *name_copy;
	char *owner_copy;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = malloc(sizeof(len(name) + 1));
		if (name_copy == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = _strcpy(name_copy, name);
	}
	else
		dog1->name = NULL;

	dog1->age = age;

	if (owner != NULL)
	{
		owner_copy = malloc(sizeof(len(owner) + 1));
		if (owner_copy == NULL)
		{
			free(dog1);
			free(name_copy);
			return (NULL);
		}
		dog1->owner = _strcpy(owner_copy, owner);
	}
	else
		dog1->owner = NULL;
	return (dog1);
}
