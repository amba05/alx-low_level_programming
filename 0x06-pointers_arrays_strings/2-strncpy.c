#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}



	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[j] = src[j];
			j++;
		}

		else
		{
			break;
		}
	}

	if (n > i / 2)
	{
		dest[j] = '\0';
	}


	return (dest);
}
