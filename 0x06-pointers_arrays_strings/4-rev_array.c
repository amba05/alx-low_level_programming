#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses the array of integers @a.
 *@a: pointer to array of integers
 *@n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	char b;
	int i, j = n - 1;


	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
		j--;
	}
}
