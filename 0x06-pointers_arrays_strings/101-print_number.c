#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	p = n;

	if (p / 10)
		print_number(P / 10);
	_putchar(p % 10 + '0');
}
