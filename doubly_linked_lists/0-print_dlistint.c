#include "lists.h"
/**
 * print_dlistint - prints out the elements of a dlistint_t list
 * @h: pointer to head of dlist list
 * Return: elements and numbers of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
