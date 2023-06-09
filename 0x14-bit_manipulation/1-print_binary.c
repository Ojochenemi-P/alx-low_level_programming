#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_binary - The binary equivalent of a decimal number to be printed.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
