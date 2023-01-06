#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: int
 * Return:int
 */
int factorial(int n)
{
	int f;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
	return (f);
}
