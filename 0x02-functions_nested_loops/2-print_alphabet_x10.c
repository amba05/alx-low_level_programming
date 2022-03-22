#include "main.h"

/**
 * print_alphabet_x10- Print lower case alphabets ten times
 */

void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num < 10; num++)
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
}
