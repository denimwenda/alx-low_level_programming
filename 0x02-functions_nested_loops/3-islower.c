#include <stdio.h>
/**
 * main - checks lowwercase letters
 * @c: parameter
 *
 * Return: 0 (success)
 */

int 3_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar ('\n');
}
