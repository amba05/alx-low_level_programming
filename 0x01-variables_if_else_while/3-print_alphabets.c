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

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (omega = 'A'; omega <= 'Z'; omega++)
		putchar(omega);

	putchar('\n');
	return (0);
}
