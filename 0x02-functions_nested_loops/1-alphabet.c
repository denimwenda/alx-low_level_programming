#include <stdio.h>
/**
 * main - print english alphabets a-z
 *
 * Return: void
 */

int main(void)
{
	char c;

	for (c = a; c <= z; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
