#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{

	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
