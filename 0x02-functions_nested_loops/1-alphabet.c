<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

=======
#include "main.h"
>>>>>>> 2308ba88e683c7ed84d1599f9d95a89925b32266
/**
 * print_alphabet- Print lower case alphabets
 */

void print_alphabet(void)
{
<<<<<<< HEAD
	char first;

	first = 'a';

	while (first <= 'z')
	{

		_putchar(first);
		first++;
	}

=======
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
>>>>>>> 2308ba88e683c7ed84d1599f9d95a89925b32266
	_putchar('\n');
}
