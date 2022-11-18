#include <stdio.h>
#include "3-calc.h"
/**
 *main- entry point into the program
 *@argc: the number of arguments passed on execution
 *@argv: the array storing the arguments
 *
 *Description: User executes the program
 *and gives two numbers with an operator between them
 *operators inlcude (+ - / * %)
 *which print sum, multiplication, division and remainder
 *
 *Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(n1, n2));
	return (0);
}
