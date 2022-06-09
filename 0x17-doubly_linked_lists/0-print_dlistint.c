#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
