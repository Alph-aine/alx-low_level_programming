#include <stdio.h>
/**
  *before_main- executes before main
  */
void before_main(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my
			back!\n");
}
