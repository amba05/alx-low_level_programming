#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: pointer to an array of integers
 * @size: the size of the array
 * @action: pointer to function (f) / function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
