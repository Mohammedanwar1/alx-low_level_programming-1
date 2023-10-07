#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 9 ; i++)
	{
		j = i + 1;
		do {
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(32);
			}
			j++;
		} while (j < 10);
	}
	putchar('\n');
	return (0);
}

