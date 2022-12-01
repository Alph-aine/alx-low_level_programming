#include "lists.h"
/**
 *free_listint2- frees a list by setting it to null
 *@head: the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		head->n = NULL;
		head = NULL;
		head = head->next;
	}

}
