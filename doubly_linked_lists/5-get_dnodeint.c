#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns nth node
 * @head: pointer to head
 * @index: index of the node
 * Return: NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count < index || current == NULL)
	{
		return (NULL);
	}
	return (current);
}
	
