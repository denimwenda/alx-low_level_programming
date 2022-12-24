#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 * Return: void
 */
void print_line(char *c, int s, int l)
{
	int y, z;

	for (y = 0; y <= 9; y++)
	{
		if (y <= s)
			printf("%02x", c[l * 10 + y]);
		else
			printf(" ");
		if (y % 2)
			putchar(' ');
	}
	for (z = 0; z <= s; z++)
	{
		if (c[l * 10 + z] > 31 && c[l * 10 + z] < 127)
			putchar(c[l * 10 + z]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
