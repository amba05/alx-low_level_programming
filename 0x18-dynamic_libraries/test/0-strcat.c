#include "main.h"

/**
 *_strcat - concatenate string src to string dest.
 *@src: source.
 *@dest: destination.
 *Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	return (dest);
}
