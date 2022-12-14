#include "lists.h"
/**
 *pop_listint- deletes the head node of a list
 *@head: the linked list
 *Return: 0 or the value of the head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;


	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
