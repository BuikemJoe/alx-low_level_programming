#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Desc: To get a random number, print the number, and specify whether the number is positive, negative or a zero.
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		print("%d is negative\n", n);
	return (0);
}
