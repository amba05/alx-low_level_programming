#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
	int largest;

    if (a >= b && b >= c)
    {
	    largest = a;
    }

    else if (b >= a && a >= c)
    {
	    largest = b;
    }

    else
    {
	    largest = c;
    }

    return (largest);
=======
int largest;

	if (a >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
>>>>>>> 2308ba88e683c7ed84d1599f9d95a89925b32266
}
