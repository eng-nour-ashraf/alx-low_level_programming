#include "main.h"
#include <stdio.h>
/**
 * clear_bit - value of a bit to 0 at index
 * @n: number to change
 * @index: index position
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int a;

	if (index > 64)
		return (-1);
	a = index;
	for (i = 1; a > 0; i *= 2, a--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
