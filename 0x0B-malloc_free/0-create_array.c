#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and initializes it
 * with a specific char
 * @size: number of characters
 * @c: array of characters
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *elem;

	elem = (char *) malloc(size * sizeof(char));

	while (i < size)
	{
		elem[i] = c;
		i++;
	}

	return (elem);

}
