#include "lists.h"

/**
 *print_list- prints the content of the nodes in a linked list
 *@h: the list
 *Return: the length of the list
 */

size_t print_list(const list_t *h)
{
	size_t hlen; /* variable to count the number of nodes in the list*/

	hlen = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		hlen++;
	}
	return (hlen++);
}
