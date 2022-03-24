#include "main.h"

/**
 *_strncpy - copy string src to string dest.
 *@src: source.
 *@dest: destination.
 *@n: numbers of elements to copy
 *Return: the pointer to dest.
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
