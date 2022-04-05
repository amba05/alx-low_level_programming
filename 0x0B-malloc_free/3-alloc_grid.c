#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocating array for a 2-D Array
 * @width: width of the array (y)
 * @height: height of the array (x)
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int a;
	int **elem;


	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	elem = malloc(sizeof(int *) * height);

	if (elem == NULL)
	{
		free(elem);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		elem[a] = malloc(sizeof(int) * width);

		if (elem[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(elem[a]);
			}

			free(elem);
			return (NULL);
		}
	}

	for (; i < height; i++)
	{
		for (; j < width; j++)
		{
			elem[i][j] = 0;
		}

	}

	return (elem);
}
