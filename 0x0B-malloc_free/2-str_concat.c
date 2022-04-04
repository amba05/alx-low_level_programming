#include "main.h"
#include <stdlib.h>

/**
 * str_concat - makes a duplicate of the concat of strings
 * @s1: first assinged string
 * @s2: second assigned string
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *elem;

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (size1 == 0 && size2 == 0)
	{
		return (NULL);
	}

	else
	{
		unsigned int size = size1 + size2 + 1;

		elem = (char *) malloc(size * sizeof(char));
		while (i < size1)
		{
			elem[i] = s1[i];
			i++;
		}

		while (j < size2)
		{
			elem[i] = s2[j];
			i++, j++;
		}
			elem[size - 1] = '\0';
	}
	return (elem);
}
