#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr-concatenats all the arguments of a program
 *@ac:th length of the arguments
 *@av:
 *
 *Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char **argv;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	argv = malloc(sizeof(char) * ac);
	if (argv == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		argv[i] = av[i];
		_putchar('argv[i]');
		i++;
	}
	return (argv);
}
