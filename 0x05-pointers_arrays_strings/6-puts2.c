#include "main.h"
/**
 * puts2 - prints every character of a string, starting with first character
 * @str: string character
 * Return: 0
 */

void puts2(char *str)
{
	int l;

	for (l = 0; str[l] !=  '\n'; l++)
		if (l % 2 == 0)
			_putchar(str[l]);
	_putchar('\n');
}
