#include <string.h>
#include <stdio.h>

#ifndef __FILENAME__
#define __FILENAME__	\
		(strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#endif

/**
 * main- a program that prints the name of the file it was compiled from.
 *
 * Return: Always 0.
 */

int main(void)
{

	printf("%s\n", __FILENAME__);

	return (0);
}
