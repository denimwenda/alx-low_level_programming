#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int c;
	c = getchar();
	
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		c = getchar();
	}
}
