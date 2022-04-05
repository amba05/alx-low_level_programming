#include "main.h"
#include <stdlib.h>

/**
 * _strdup - makes a duplicate of a string
 * @str: assinged string
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i = 0;
	char *elem;


	if (str == NULL)
	{
		return (NULL);
	}


	else
	{
		while (str[size] != '\0')
		{
			size++;	
		}

		size = size + 1;
		elem = (char *) malloc(size * sizeof(char));

	while (i < size)
	{
		elem[i] = str[i];
		i++;
	}

	elem[size - 1] = '\0';
	return (elem);
	}
}
