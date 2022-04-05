#include "main.h"
#include <stdio.h>
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

	if (size == 0 || elem == 0)
	{
		return (0);
	}



	while (i < size)
	{
		elem[i] = c;
		i++;
	}

	return (elem);

}
