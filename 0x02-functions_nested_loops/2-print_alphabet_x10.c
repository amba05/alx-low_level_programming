#include "main.h"

/**
<<<<<<< HEAD
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

=======
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
>>>>>>> 2308ba88e683c7ed84d1599f9d95a89925b32266
	}
}
