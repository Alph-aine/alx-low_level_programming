#include "lists.h"
/**
 *add_nodeint_end- adds a new node to the end of a list
 *@head: the old list
 *@n: the value of the new node
 *Return: an address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (head != NULL)
		head = head->next;
	*head->next = new_node;

	return (new_node);
}
