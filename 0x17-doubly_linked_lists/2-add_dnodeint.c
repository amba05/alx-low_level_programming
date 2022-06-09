#include "lists.h"

/**
 * add_dnodeint - check the code
 *
 * @head: head link
 * @n: integer to insert
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}


	new->n = n;

	new->next = *head;

	*head = new;

	new->prev = *head;

	return (*head);
}
