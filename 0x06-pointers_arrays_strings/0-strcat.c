#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenating function
 * Desc: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte.
 * @dest - the destination string
 * @src - the source string
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char greet[35] = "greet";
	char name[] = "Joe";
	
	_strcat(greet, name);
	_putchar("%s\n", greet);
}
