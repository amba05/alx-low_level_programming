#include <stdlib.h>
#include <stdio.h>

/**
 *main- alpha: letter a to z
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha, omega;

	for (alpha = '0'; alpha <= '9'; alpha++)
		putchar(alpha);

	for (omega = 'a'; omega <= 'f'; omega++)
		putchar(omega);

	putchar('\n');
	return (0);
}
