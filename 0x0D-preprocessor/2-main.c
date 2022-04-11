#include <string.h>
#include <stdio.h>

#ifndef __FILENAME__
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#endif
int main() 
{

	printf("%s\n", __FILENAME__);

	return (0);
}

