#include <stdio.h>
/**
 * main - main
 * Desc: assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n.
 * Return: 0 (success)
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10); /*This is an ASCII code for new line*/
	return (0);
}
