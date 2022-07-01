#include <stdio.h>
/**
 * main - main block
 * Desc: assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n.
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii code for new line*/
	return (0);
}
