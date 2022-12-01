#include "lists.h"
/**
 *pop_listint- deletes the head node of a list
 *@head: the linked list
 *Return: 0 or the value of the head node
 */
int pop_listint(listint_t **head)
{
	if (head == NULL)
		return (0);
	return (head->n);
	free(head);
}
