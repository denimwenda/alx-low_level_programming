#include <stdio.h>
#include <stdlib.h>
/**
 * main - main bloc
 *
 * Return: Always (0) success
 *
 */

int  main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{

		for (m = n + 1; m < 10;  m++)
		{
			putchar('0' + (n % 10));
			putchar('0' + (m % 10));

			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}


	putchar('\n');
	return (0);
}
