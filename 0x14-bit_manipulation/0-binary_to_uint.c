#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - number to an unsigned int
 * @b: string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int a;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (power = 1, total = 0, a--; a >= 0; a--, power *= 2)
	{
		if (b[a] == '1')
			total += power;
	}

	return (total);
}
