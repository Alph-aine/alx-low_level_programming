#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array- create an array &
 *assigns memory dynamically through malloc
 *@size: the size of the array
 *@c: the data type of th array
 *
 *Return: a pointer to the array if successful
 *or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	while (i < (int)size)
	{
		*(ar + i) = c;
		i++;
	}
	*(ar + i) = '\0';

	return (ar);
}
