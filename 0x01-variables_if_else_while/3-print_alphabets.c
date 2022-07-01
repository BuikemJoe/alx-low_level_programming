#include <stdio.h>
/**
 * main - main block
 * Desc: a program that prints the alphabet in lowercase and then in uppercase.
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
		putchar(10); /* this is an ascii code for new line*/

	return (0);
}
