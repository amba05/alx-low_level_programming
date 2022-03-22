#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- Print lower case alphabets
 */

void print_alphabet(void)
{
	char first;

	first = 'a';

	while (first <= 'z')
	{

		_putchar(first);
		first++;
	}

	_putchar('\n');
}
