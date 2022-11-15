#include <stdio.h>
/**
 *main- entry point of the program
 *@argc: the number of arguments passedon execution
 *@argv: the value of those arguments
 *
 *Return: 0 or 1
 */

int main(int argc, __attribute__ ((unused)) int *argv[])
{
	int i = 1;

	if (argc >= 2)
		printf("%d\n", argv[i] * argv[i + 1]);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

