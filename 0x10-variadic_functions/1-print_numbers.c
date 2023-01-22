#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: Nothing if separator in NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int l;

	va_start(numbers, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(numbers, int));
		if (l != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
