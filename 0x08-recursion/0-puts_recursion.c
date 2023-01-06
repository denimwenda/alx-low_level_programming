#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 3);
	}
	else
	{
		_putchar('\n');
	}
}
