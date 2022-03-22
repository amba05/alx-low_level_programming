#include "main.h"

/**
 *main - entry point
 *function - positive_or_negative - print if integer is positive or nnegative
 *Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero", i);
	}
	
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
	
	else 
	{
		printf("%d is negative", i);
	}

}
