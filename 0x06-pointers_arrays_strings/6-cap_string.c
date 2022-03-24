#include "main.h"
/**
 *cap_string - convert lowercase to uppercase letters
 *by subtracting 32 from the ASCII values if they are
 *lowercase letters.
 *@str: source
 *Return: str.
 */

char *cap_string(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}


	while (j < i)
	{
		if (str[j] == ' ' && str[j + 1] >= 'a' && str[j + 1] <= 'z')
		{
			str[j + 1] = str[j + 1] - 32;
		}

		else if (str[j] == '\n' && str[j + 1] >= 'a' && str[j + 1] <= 'z')
		{
			str[j + 1] = str[j + 1] - 32;
		}

		else if (str[j] == '\t' && str[j + 1] >= 'a' && str[j + 1] <= 'z')
		{
			str[j + 1] = str[j + 1] - 32;
		}

		else if (str[j] == '.' && str[j + 1] >= 'a' && str[j + 1] <= 'z')
		{
			str[j + 1] = str[j + 1] - 32;
		}

		else
		{
			str[j] = str[j];
		}

		j++;

	}

	return (str);
}
