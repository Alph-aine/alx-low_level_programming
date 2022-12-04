#include "lists.h"

/**
 *reverse_listint- reverse a list
 *@head: a pointer to the list
 *
 *Return: a pointer to the first node of reverte list
 *or NULL on failure
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

/* if there's no pointer to a list or the list is empty */
	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /* tracks the next node after current */

/* points the current node to null first case and to the previous node later */
		(*head)->next = prev;

		prev = *head; /* sets the current node as the previous */
		*head = next; /* moves to the next node */

	}

	(*head) = prev; /* unlink the last node from null and points backwards */
	return (*head);
}
