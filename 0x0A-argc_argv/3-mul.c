#include <stdlib.h>
#include <stdio.h>
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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

