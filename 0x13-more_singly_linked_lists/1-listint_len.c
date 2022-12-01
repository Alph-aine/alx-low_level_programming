#include "lists.h"
/**
 *listint_len- returns the length of a list
 *@h: the list
 *Return: the length of the string
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
