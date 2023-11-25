#include "lists.h"
/**
 * dlistint_len - function that returns length of in doubly linked list
 * @h: pointer to the head
 *
 * Return: number of count of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
