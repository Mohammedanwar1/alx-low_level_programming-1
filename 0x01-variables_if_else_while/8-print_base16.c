#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int d;

	for (d = 0 ; d < 16 ; d++)
	{
		if (d < 10)
		{
			putchar('0' + d);
		}
		else
		{
			putchar(87 + d);
		}
	}
	putchar('\n');
	return (0);
}

