#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 */

void print_most_numbers(void)
{
	int b = 0;

	for (; b < 10; b++)
	{
		if (b == 2 || b == 4)
			continue;

		putchar(b + '0');
	}
	putchar('\n');
}
