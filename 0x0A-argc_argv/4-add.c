#include <stdio.h>
#include <stdlib.h>

/**
 *main: function
 *@argc - argument count
 *@argv: argument value
 *description: prints an argument name
 *Return: 0.
 */

int main (int argc, char *argv[])
{
	int i = 0, j = 0;


	if (argc < 2)
	{
		printf("%s\n", "0");
	}


	if (argc > 2)
	{

	for (i = 1; i < argc; i++)
	{

		if (argv[i] >= '1' && argv[i] <= "1000")
		{
			printf("%d\n", j + atoi(argv[i]));

		}

		else
		{
			printf("%d\n", 0);
		}

		i++;
	}

	}

	return (0);
}
