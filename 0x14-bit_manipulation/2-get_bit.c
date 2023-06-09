#include "main.h"
#include <stddef.h>

/**
 * get_bit - The value of a bit at index in decimal number to be returned.
 * @n: The number to search.
 * @index: The index of the bit.
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
