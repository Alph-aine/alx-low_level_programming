#include "lists.h"
/**
  *sum_listint- sums the data in a list
  *@head: the list
  *Return: null or the result of sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int count = 0;

	if (head == NULL)
		return (0);
	while (*head != NULL)
	{
		sum += head->n;
		count++;
	}
	return (sum);

}
