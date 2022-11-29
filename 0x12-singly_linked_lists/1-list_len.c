#include "lists.h"

/**
 *list_len- returns the number of elements in a linkedlist
 *@h: the linked list
 *Return: the number of elemnts in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count += 1; /* count 1  for the last pointer */
	return (count);
}
