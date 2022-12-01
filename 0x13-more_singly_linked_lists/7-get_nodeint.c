#include "lists.h"
/**
 *get_nodeint_at_index- accesses a node at index n
 *@head: the linked list
 *@index: the index of the node to find
 *Return: null or the address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (head == NULL)
		return (NULL);

	while ((count < index) && head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
