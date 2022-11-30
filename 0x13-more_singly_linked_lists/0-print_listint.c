#include "lists.h"

/**
 *print_listint- prints the contents of a list
 *@h: the list
 *Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
