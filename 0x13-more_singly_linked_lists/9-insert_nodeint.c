#include "lists.h"
/**
 *insert_nodeint_at_index- inserts a node at a given index
 *@head: the existing list
 *@idx: the index to  insert the new node
 *@n: the value of the new node
 *Return: null or address of  new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int  i = 0;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* if idx is 0 */
	if (idx == 0)
	{
		new_mode->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* setting temporary storage for *head */
	temp = *head;

	/* to traverse to the pointer before the index */
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
		/* to check if idx is out of range */
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}


