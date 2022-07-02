#include <stdio.h>
#include <stdio.h>
/**
 * main - main block
 * Desc: A program that prints all possible different
 * combinations of two digits.
 * Return: 0 (success)
 */
int main(void)
{
	int a = 0;
	int b_d;
	int c_d;

	int a2;
	int b_d2;
	int c_d2;

	while (a <= 98)
	{
		b_d = (a / 10 + '0');
		c_d = (a % 10 + '0');
		a2 = 0;
		while (a2 <= 99)
		{
			b_d2 = (a2 / 10 + '0');
			c_d2 = (a2 / 10 + '0');

			if (a < a2)
			{
				putchar(b_d);
				putchar(c_d);
				putchar(' ');
				putchar(b_d2);
				putchar(c_d2);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a2++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
