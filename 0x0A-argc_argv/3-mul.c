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

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	else 
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return 0;
	}

}
