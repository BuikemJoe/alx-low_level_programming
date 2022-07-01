#include <stdio.h>
/**
 * main - main block
 * Desc: A program that prints the alphabet in lowercase, followed by a new line.
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
}
