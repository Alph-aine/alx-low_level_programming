#include "function_pointers.h"
/**
 *print_name- prints name
 *@name: the string literal to be printed
 *@f: the function pointer that contains the print directives
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
