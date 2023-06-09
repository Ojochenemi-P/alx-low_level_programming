#include "main.h"
#include <stddef.h>

/**
 * get_endianness - Checks if a machine is little or big endian.
 * Return: Return 0 for big, 1 for little.
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
