#include "lists.h"
/**
 * add_dnodeint - function thats adding a node at the beginning
 * @head: pointer to pointer of head
 * @n: integer given as arg of data value
 *
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
