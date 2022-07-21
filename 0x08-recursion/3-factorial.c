#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: pointer to block of memory to fill
 * Return: factorial value
 */

int factorial(int n)
{
	if (n == 0) /*Base condition*/

		return (1);

	else if (n < 0) /*Base condition*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/

}
