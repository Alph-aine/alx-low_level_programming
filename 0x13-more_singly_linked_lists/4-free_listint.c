#include "lists.h"
/**
 *free_listint-frees a node
 *@head: the node
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
