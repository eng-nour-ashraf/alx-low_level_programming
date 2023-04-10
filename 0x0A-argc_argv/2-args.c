#include <stdio.h>

/**
* main - return argu it received
*@argc: argu count
*@argv: argu vector
*Return: 0 success
*/

int main(int argc, char *argv[])
{
		int a;

		for (a = 0; a < argc; a++)
			printf("%s\n", argv[a]);

		return (0);
}
