#include <stdio.h>
/**
 * main - main block
 * Desc: A program that prints the alphabet in both cases.
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10); /* this is an ascii code for new line*/
	return (0);
}
