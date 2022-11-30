#include "lists.h"
/**
  *free_list- frees a list
  *@head: the list
  */

void free_list(list_t *head)
{
	while (head != NULL)
		free(head);
}
