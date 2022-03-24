#include "main.h"
/**
 *string_toupper - convert lowercase to uppercase letters
 *by subtracting 32 from the ASCII values if they are
 *lowercase letters.
 *@str: source.
 */

char *string_toupper(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}


	while(j < i)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}

		j++;

	}

	return (str);
}
