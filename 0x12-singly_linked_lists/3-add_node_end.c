#include "lists.h"
#include <string.h>

/**
 *_strlen- fins the length of a string
 *@str: the string
 *Return: the length of the string
 */

int _strlen(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 *add_node_end- adds a new node at the end of a list
 *@head: the existing list
 *@str: the value of the new node
 *Return: returns a pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)  /* to avoid memory leakage */
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (head == NULL)
		*head = new_node; /* sets head to new_node if head is null */
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

