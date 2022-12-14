#include "main.h"
/**
 * prints_alphabet_x10 - a function that prints 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	i = 0;

	while (i < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
