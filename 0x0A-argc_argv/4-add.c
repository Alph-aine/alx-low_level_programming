#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/**
 *is_num- iterates through the array and check if the elements are integers
 * returns 0 if a non integer is found
 * returns 1 if intger
 *@argv: the array to be passed
 *Return: 1 or 0
 */
bool is_num(char *argv)
{
	int j = 0;

	for (; argv[j]; j++)
	{
		if (!(argv[j] >= '0' && argv[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 *main- entry point of the program
 *@argc: the number of arguments passedon execution
 *@argv: the value of those arguments
 *
 *Return: 0 or 1
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i = 1;
	int sum = 0;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
