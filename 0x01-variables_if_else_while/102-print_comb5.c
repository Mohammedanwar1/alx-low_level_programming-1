#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int t;
	int h;
	int n;
	int s;

for ( t = 0 ; t < 10 ; t++)
{	

	for (h = 0 ; h <= 10 ; h++)
	{
	
		for (n = 0 ; n < 10 ; n++)
		{
			for ( s = 0 ; s < 10 ; s++)
			{
				putchar('0' + t);
				putchar('0' + h);
				putchar(32);
				putchar('0' + n);
				putchar('0' + s);
				if (!(t == 9 && h == 8))
				{
					putchar(',');
					putchar(32);
				}
				s++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}

