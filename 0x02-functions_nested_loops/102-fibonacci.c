#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int o, p, q, next;

	p = 1;
	q = 2;

	for (o = 1; o <= 50; ++o)
	{
		if (p != 20365011074)
		{
			printf("%ld, ", p);
		}
		else
		{
			printf("%ld\n", p);
		}
		next = p + q;
		p = q;
		q = next;
	}
	return (0);
}
