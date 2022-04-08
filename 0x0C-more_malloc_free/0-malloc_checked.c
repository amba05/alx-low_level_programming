#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc cheked
 * @b: numbers
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *elem;

	elem = malloc(b);
		
	if (elem == NULL)
	{
		exit (98);
	}
		return (elem);
}
