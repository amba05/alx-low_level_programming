#include "main.h"

/**
 *_strcmp - compare string src to string dest.
 *@s1: source.
 *@s2: destination.
 *Return: the difference.
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0, l = 0;


	if (s1[k] == s2[k])
	{
		k++;
	}

	else
	{
		l = s1[k] - s2[k];
	}


	return (l);
}
