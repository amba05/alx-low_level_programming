#include "main.h"

/**
<<<<<<< HEAD
 *isLower(): checks if letter is lower case
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

=======
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 **/
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
>>>>>>> 2308ba88e683c7ed84d1599f9d95a89925b32266
