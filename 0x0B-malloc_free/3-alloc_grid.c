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

	else
	{
		unsigned int size = width * height;

		elem = (int **) malloc(size * sizeof(int));

		for (a = 0; a < height; a++)
		{
			elem[a] = (int *) malloc(height * sizeof(int));
		}

		while (i < height)
		{
			while (j < width)
			{
				elem[i][j] = 0;
				j++;
			}

			i++;
		}

		return (elem);
	}
}

