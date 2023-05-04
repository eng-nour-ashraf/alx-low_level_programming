#include "main.h"
#include <stdio.h>

/**
 * print_binary - print representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (a = n, shifts = 0; (a >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
