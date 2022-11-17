#include "dog.h"
/**
  *init_dog- initializes a struct
  *@d: the struct
  *@name: the first member of the struct
  *@age: the second member
  *@owner: the third member
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
