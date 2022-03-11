#include <stdlib.h>
#include <stdio.h>

/**
 *main- nums: number 1 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int nums;

	for (nums = '0'; nums <= '9' ; nums++)
		putchar(nums);

	putchar('\n');
	return (0);
}
