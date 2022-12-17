#include "main.h"
/*
 * print_numbers -  prints the numbers, from 0 to 9
 *
 * followed by a new line
 *
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}

	putchar('\n');
}
