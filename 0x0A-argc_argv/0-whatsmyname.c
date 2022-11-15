#include <stdio.h>
/**
 *main- entry point into the program
 *@argc: the number of arguments passed on the stdout
 *@argv: the array that keeps the values of argc
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
