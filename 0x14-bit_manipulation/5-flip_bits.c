#include "main.h"
#include <stddef.h>

/**
 * flip_bits - Counts the number of bits to change,
 * to get from one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: The number of bits to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
