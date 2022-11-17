#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name- prints name
 *@name: the string literal to be printed
 *@f: the function pointer that contains the print directives
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
