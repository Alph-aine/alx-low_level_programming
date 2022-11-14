#include "main.h"
#include <unistd.h>

/**
  * function _putchar - A substitute for printf written by me
  * @char input: the argument to be passed
  * 	
  * Description : It contains the function body of _putchar * Description : It
  * contains the function body of _putchar
  * Return : Always 0 (Sucess)
  */
int _putchar(char c)  /* function definition*/
{ /** This is the body of the function.
   * the prototype has been defined in main.h
   * 'char' : It's the argumnet's data type
   */
	write(1, &c,1);
	return (0);
}
