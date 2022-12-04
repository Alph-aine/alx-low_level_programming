#include "lists.h"

/**
 *delete_nodeint_at_index- deletes a node at a given index
 *@head: the list containing the node
 *@index: the index of the node to be deleted
 *
 *Return: -1 if it failed or 1 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp2;

	if (head == NULL)
		return (-1);

	temp =  *head;

	/* account for index  = 0 */
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	/* to traverse to the index before the given index */
	while ((i < (index - 1)) && temp != NULL)
	{
		temp = temp->next;
		i++;
	}


	/* if the next index is null or the index is out range */
	/* return -1 and do not delete */
	if ((i != (index - 1)) || temp->next == NULL)
		return (-1);

	/* set the index to be deleted to a temp */
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
