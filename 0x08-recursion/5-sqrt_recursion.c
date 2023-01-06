#include "main.h"
/**
 * power_operation - returns the natural square root
 * @w: input
 * @y: integer
 * Return: square root or -1
 */

int power_operation(int w, int y)
{
	if (y % (w / y) == 0)
	{
		if (y * (w / y) == w)
			return (y);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: square
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
