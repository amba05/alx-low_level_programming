#include <stdlib.h>
#include <stdio.h>

/**
 *main- num: 1 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);

		if (alpha != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
