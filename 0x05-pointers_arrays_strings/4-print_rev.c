#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	int l, k;

	k = 0;
	while (s[k] != '\0')
		k++;

	for (l = k - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
