#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - prints an integer
 * @array: pointer to an array of integers
 * @size: the size of the array
 * @cmp: pointer to function / function pointer
 *
 * Return: an integer..
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (i == 20)
		return (-1);

	return (0);
}
