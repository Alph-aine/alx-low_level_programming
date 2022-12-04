#include "main.h"
/**
 *malloc_checked- allocates memory
 *@b: the variable
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	b = malloc(sizeof(unsigned int));
	if (b == NULL)
		exit(98);
}
