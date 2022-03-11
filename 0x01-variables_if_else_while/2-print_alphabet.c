#include <stdlib.h>
#include <stdio.h>

/**
 *main- alpha: letter a to z
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
