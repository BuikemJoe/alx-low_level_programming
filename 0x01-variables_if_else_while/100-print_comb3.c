#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Desc: a program that prints all possible different combinations
 * of two digit numbers must be separated by ,, and followed
 * by a space.
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != m 17)
				{
					putchar(',');
					putchar(',');
				}
			}

			c++;
		}
		d++
	}
	putchar ('\n')
	return (0);
}
