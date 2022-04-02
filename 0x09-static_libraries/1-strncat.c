#include "main.h"

/**
 *_strncat - concatenate string src to string dest.
 *@src: source.
 *@dest: destination.
 *@n: bytes or sizes from source to concatenate
 *Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
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
			dest[i] = src[j];
			i++;
			j++;
		}

		else
		{
			break;
		}
	}


	return (dest);
}
