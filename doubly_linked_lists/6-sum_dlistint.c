#include "lists.h"
/**
 * sum_dlistint - function that returns sum of all the data in list
 * @head: pointer to head
 * Return: an empty list, 0 otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
