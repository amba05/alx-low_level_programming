#include <stdio.h>
#include <stdlib.h>

/**
 *main: function
 *@argc - argument count
 *@argv: argument value
 *description: prints an argument name
 *Return: 0.
 */

int calc (int num)
{
	int j = 0, k = 0;
	int change = {25, 10, 5, 2, 1};
	
		if (num % change[j] == 0)
		{
			k = num / change[j];
		}

		return (k);
}



int main (int argc, char *argv[])
{

	int i;

	int cent = atoi(argv[1]);

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	if (argc == 2 && cent < 1) 
	{
		printf("%d\n", 0);
	}

	if (argc == 2 && cent >= 1)
	{
		i = calc(cent);
		printf("%d\n", i);
	}

}
