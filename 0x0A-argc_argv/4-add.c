#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
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
	if (isalpha(argv))
	{
		printf("Error\n");
		return (1);
	}
	if (argc >= 3)
	{
		for (; i <= argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);

}

