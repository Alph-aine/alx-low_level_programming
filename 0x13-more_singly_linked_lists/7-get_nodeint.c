#include "lists.h"
/**
 *get_nodeint_at_index- accesses a node at index n
 *@head: the linked list
 *@index: the index of the node to find
 *Return: null or the address of the data at the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	count = 0;
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp->n);
		count++;
		temp = temp->next;
	}
	if (index > count)
		return (NULL);
}
