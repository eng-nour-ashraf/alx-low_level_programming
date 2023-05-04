#include "main.h"
#include <stdio.h>

/**
 * flip_bits - convert one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int a;

	diff = n ^ m;
	a = 0;

	while (diff)
	{
		a++;
		diff &= (diff - 1);
	}

	return (a);
}

