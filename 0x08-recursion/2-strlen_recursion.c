#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int b = 0;

	if (*s)
	{
		b++;
		i += _strlen_recursion(s + 1);
	}
	return (b);
}
